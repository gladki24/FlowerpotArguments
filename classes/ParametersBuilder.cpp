//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersBuilder.h"

namespace Flowerpot {
    void ParametersBuilder::AddFlag(std::string flag) {
        _flags.push_back(flag);
    }

    void ParametersBuilder::AddKeyValue(std::pair<std::string, std::string> keyValue) {
        _keyValues.insert(keyValue);
    }

    void ParametersBuilder::AddValue(std::string value) {
        _values.push_back(value);
    }

    Parameters ParametersBuilder::Build() const {
        return Parameters(_values, _flags, _keyValues);
    }
}