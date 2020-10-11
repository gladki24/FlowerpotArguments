//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSHANDLERFACTORY_H

#include <memory>
#include <vector>
#include "../../enums/Style.h"
#include "ParametersHandler.h"

#define FLOWERPOTARGUMENTS_PARAMETERSHANDLERFACTORY_H

using vector_iterator = std::vector<std::string>::const_iterator;

namespace Flowerpot {
    class ParametersHandlerFactory {
    public:
        ParametersHandlerFactory() = default;
        explicit ParametersHandlerFactory(Style style);
        std::unique_ptr<ParametersHandler> create(vector_iterator& element, vector_iterator next) const;

    private:
        Style _style;

        bool _isKey(const std::string&) const;
        bool _isValue(const std::string&) const;
        bool _isValueAndKey(const std::string&) const; // TODO
        char _getKeyPrefix() const;
    };
}

#endif //FLOWERPOTARGUMENTS_PARAMETERSHANDLERFACTORY_H
