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

    Parameters Arguments::ToParameters(char ** array, int count) const {
        Parser parser(count, array);
        const auto list = parser.ToList();
        return ToParameters(list);
    }

    Parameters Arguments::ToParameters(const std::list<std::string> &list) const {
        const std::vector<std::string> vector(list.begin(), list.end());
        return ToParameters(vector);
    }

    Parameters Arguments::ToParameters(const std::vector<std::string> &vector) const {
        ParametersBuilder builder;
        vector_iterator vectorEnd = vector.end();

        for (auto element = vector.begin(); element != vectorEnd; element++) {
            const ParametersHandlerFactory handlerFactory(_style);
            const auto handler = handlerFactory.create(element, std::next(element), vectorEnd);
            handler->Handle(builder);
        }

        return builder.Build();
    }
}