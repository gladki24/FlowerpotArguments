//
// Created by Seweryn on 01.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARSER_H
#include <list>
#include <string>
#include <vector>
#include <array>

#define FLOWERPOTARGUMENTS_PARSER_H

namespace FlowerpotArguments {
    class Parser {

    public:
        Parser() = delete;
        Parser(int & count, char** array);
        ~Parser() = default;
        Parser(const Parser &) = default;
        Parser(Parser &&) = default;
        int count() const;
        const std::string& getProgramName() const;
        std::list<std::string> toList() const;
        std::vector<std::string> toVector() const;
        static std::vector<std::string >ParseStringArrayToVector(const int& count, char** array);


    private:
        const std::vector<std::string> _vector;
        const std::string _programName;
    };
}

#endif //FLOWERPOTARGUMENTS_PARSER_H
