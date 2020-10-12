//
// Created by Seweryn on 08.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_ARGUMENTS_H
#include <map>
#include <string>
#include <vector>
#include <list>
#include <array>
#include "handlers/ParametersHandlerFactory.h"
#include "Parameters.h"


#define FLOWERPOTARGUMENTS_ARGUMENTS_H

namespace Flowerpot {
    class Arguments {
    public:
        Arguments();
        Arguments(Style style);
        ~Arguments() = default;
        Arguments(Arguments&) = default;
        Arguments(Arguments&&) = default;
        Arguments& operator=(const Arguments&) = default;

        Parameters ToParameters(const std::vector<std::string>&) const;
        Parameters ToParameters(const std::list<std::string>&) const;
        Parameters ToParameters(char**, int) const;

    private:
        Style _style;
    };
}


#endif //FLOWERPOTARGUMENTS_ARGUMENTS_H
