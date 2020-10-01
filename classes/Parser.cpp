//
// Created by Seweryn on 01.10.2020.
//

#include "Parser.h"

namespace FlowerpotArguments {
    std::vector<std::string> Parser::ParseStringArrayToVector(const int &count, char **array) {
        std::vector<std::string> elements;

        for (int i = 1; i < count; i++) {
            elements.push_back(std::string(array[i]));
        }

        return elements;
    }

    Parser::Parser(int &count, char **array)
            : _programName(std::string(array[0])), _vector(ParseStringArrayToVector(count, array)) {
    }

    int Parser::count() const {
        return _vector.size();
    }

    const std::string &Parser::getProgramName() const {
        return _programName;
    }

    std::vector<std::string> Parser::toVector() const {
        return _vector;
    }

    std::list<std::string> Parser::toList() const {
        return std::list<std::string>(_vector.begin(), _vector.end());
    }
}