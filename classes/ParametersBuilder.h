//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSBUILDER_H
#include <list>
#include <string>
#include <map>
#include "Parameters.h"

#define FLOWERPOTARGUMENTS_PARAMETERSBUILDER_H

namespace Flowerpot {
    class ParametersBuilder {
    public:
        ParametersBuilder() = default;
        ~ParametersBuilder() = default;

        void AddValue(std::string value);
        void AddFlag(std::string flag);
        void AddKeyValue(std::pair<std::string, std::string> keyValue);

        Parameters Build() const;
    private:
        std::list<std::string> _values;
        std::list<std::string> _flags;
        std::map<std::string, std::string> _keyValues;
    };
}


#endif //FLOWERPOTARGUMENTS_PARAMETERSBUILDER_H
