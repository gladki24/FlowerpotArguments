//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSHANDLER_H

#include <string>
#include <utility>
#include <vector>
#include <string>
#include "../ParametersBuilder.h"

#define FLOWERPOTARGUMENTS_PARAMETERSHANDLER_H

using pair = std::pair<std::string, std::string>;
using iterator = std::vector<std::string>::const_iterator;

namespace Flowerpot {
    class ParametersHandler {
    public:
        ParametersHandler() = delete;
        ParametersHandler(iterator& element, iterator nextElement);
        virtual ~ParametersHandler() = default;
        virtual void Handle(ParametersBuilder& parameters) = 0;
    protected:
        iterator& element;
        iterator nextElement;
    };
}


#endif //FLOWERPOTARGUMENTS_PARAMETERSHANDLER_H
