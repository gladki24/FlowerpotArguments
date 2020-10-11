//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERS_H

#include <list>
#include <string>
#include <map>

#define FLOWERPOTARGUMENTS_PARAMETERS_H

namespace Flowerpot {
    class Parameters {
        friend class ParametersBuilder;

    public:
        const std::list<std::string> &GetValues();

        const std::list<std::string> &GetFlags();

        const std::map<std::string, std::string> &GetKeyValue();

    private:
        Parameters(std::list<std::string> values, std::list<std::string> flags,
                   std::map<std::string, std::string> keyValue);

        std::list<std::string> _values;
        std::list<std::string> _flags;
        std::map<std::string, std::string> _keyValue;
    };
}


#endif //FLOWERPOTARGUMENTS_PARAMETERS_H
