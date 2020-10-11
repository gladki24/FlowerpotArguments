//
// Created by Seweryn on 11.10.2020.
//

#include "Parameters.h"

namespace Flowerpot {
    const std::list<std::string> &Parameters::GetFlags() {
        return _flags;
    }

    const std::map<std::string, std::string> &Parameters::GetKeyValue() {
        return _keyValue;
    }

    const std::list<std::string> &Parameters::GetValues() {
        return _values;
    }

    Parameters::Parameters(std::list<std::string> values, std::list<std::string> flags,
                           std::map<std::string, std::string> keyValue) : _values(std::move(values)),
                                                                          _flags(std::move(flags)),
                                                                          _keyValue(std::move(keyValue)) {

    }
}