//
// Created by Seweryn on 08.10.2020.
//

#include "Arguments.h"

namespace Flowerpot {
    Arguments::Arguments() : _style(Style::POSIX) { }

    Arguments::Arguments(Style style) : _style(style) {}

    std::map<std::string, std::string> Arguments::ToMap(char ** array, int count) const {}

    std::map<std::string, std::string> Arguments::ToMap(std::list<std::string> &list) const {}

    std::map<std::string, std::string> Arguments::ToMap(std::vector<std::string> &vector) const {
        unsigned int unspecifiedKeyCounter = 0;

        for (const auto& param : vector) {
            std::pair<std::string, std::string> keyValue;


            unspecifiedKeyCounter++;
        }
    }


    char Arguments::_getKeyPrefix() const {
        switch(_style) {
            case Style::POSIX: return '-';
            case Style::Windows: return '/';
        }
    }

    bool Arguments::_isValue(std::string &value) const {
        return value[0] != _getKeyPrefix() && value.find('=') == std::string::npos;
    }

    bool Arguments::_isKey(std::string &value) const {
        return value[0] == _getKeyPrefix();
    }

    bool Arguments::_isValueAndKey(std::string &value) const {
        return value.find('=') != std::string::npos;
    }
}