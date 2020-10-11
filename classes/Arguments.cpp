//
// Created by Seweryn on 08.10.2020.
//

#include <iostream>
#include "Arguments.h"
#include "Parser.h"
#include "ParametersBuilder.h"

namespace Flowerpot {
    Arguments::Arguments() : _style(Style::POSIX) { }

    Arguments::Arguments(Style style) : _style(style) { }

    Parameters Arguments::ToMap(char ** array, int count) const {
        Parser parser(count, array);
        const auto list = parser.ToList();
        return ToMap(list);
    }

    Parameters Arguments::ToMap(const std::list<std::string> &list) const {
        const std::vector<std::string> vector(list.begin(), list.end());
        return ToMap(vector);
    }

    Parameters Arguments::ToMap(const std::vector<std::string> &vector) const {
        ParametersBuilder builder;

        for (auto element = vector.begin(); element != vector.end(); element++) {
            const ParametersHandlerFactory handlerFactory(_style);
            const auto handler = handlerFactory.create(element, std::next(element));
            handler->Handle(builder);
        }

        return builder.Build();
    }
}