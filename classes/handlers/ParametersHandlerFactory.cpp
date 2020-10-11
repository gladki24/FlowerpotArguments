//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersHandlerFactory.h"
#include "ParametersValue.h"
#include "ParametersKeyValue.h"
#include "ParametersKey.h"

namespace Flowerpot {
    using ptr = std::unique_ptr<ParametersHandler>;

    ParametersHandlerFactory::ParametersHandlerFactory(Style style) : _style(style) {}

    std::unique_ptr<ParametersHandler> ParametersHandlerFactory::create(vector_iterator& element,
                                                                        vector_iterator next) const {

        const auto elementData = element->data();
        const auto nextElementData = next->data();

        if (_isKey(elementData)) {
            if (_isValue(nextElementData)) {
                return ptr(new ParametersKeyValue(element, next));
            } else {
                return ptr(new ParametersKey(element, next));
            }
        } else if (_isValue(elementData)) {
            return ptr(new ParametersValue(element, next));
        }

        throw std::runtime_error("Unsupported case");
    }

    char ParametersHandlerFactory::_getKeyPrefix() const {
        switch(_style) {
            case Style::POSIX: return '-';
            case Style::Windows: return '/';
            default: throw std::runtime_error("Invalid cmd parameters style");
        }
    }

    bool ParametersHandlerFactory::_isValue(const std::string &value) const {
        return value[0] != _getKeyPrefix() && value.find('=') == std::string::npos;
    }

    bool ParametersHandlerFactory::_isKey(const std::string &value) const {
        return value[0] == _getKeyPrefix();
    }

    bool ParametersHandlerFactory::_isValueAndKey(const std::string &value) const {
        return value.find('=') != std::string::npos;
    }
}