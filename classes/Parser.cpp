//
// Created by Seweryn on 01.10.2020.
//

#include "Parser.h"

namespace Flowerpot {
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

    Parser::Parser(const int &count, char **array) :
            _programName(std::string(array[0])), _vector(ParseStringArrayToVector(count, array)) {
    }

    int Parser::Count() const {
        return _vector.size();
    }

    const std::string &Parser::GetProgramName() const {
        return _programName;
    }

    std::vector<std::string> Parser::ToVector() const {
        return _vector;
    }

    std::list<std::string> Parser::ToList() const {
        return std::list<std::string>(_vector.begin(), _vector.end());
    }
}