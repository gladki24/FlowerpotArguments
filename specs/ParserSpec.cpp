//
// Created by Seweryn on 12.10.2020.
//

#include "./catch.h"
#include "../classes/Parser.h"

#define PARAM_COUNT 4
#define PROGRAM_NAME "a"

TEST_CASE("Parser", "[FlowerpotArgumentsSpecs][Parser]") {

    char* programArguments[PARAM_COUNT] = { PROGRAM_NAME, "-b", "c", "-d" };
    int count = PARAM_COUNT;

    Flowerpot::Parser parser(count, programArguments);

    SECTION("Count") {
        REQUIRE(parser.Count() == PARAM_COUNT - 1);
    }

    SECTION("Program's name") {
        REQUIRE(parser.GetProgramName() == PROGRAM_NAME);
    }

    SECTION("To list") {
        std::list<std::string> expectedResult {"-b", "c", "-d"};
        REQUIRE(expectedResult == parser.ToList());
    }

    SECTION("To vector") {
        std::vector<std::string> expectedResult {"-b", "c", "-d"};
        REQUIRE(expectedResult == parser.ToVector());
    }
}
