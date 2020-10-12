//
// Created by Seweryn on 12.10.2020.
//

#define CATCH_CONFIG_MAIN // provides main(); this line is required in only one .cpp file

#include "./catch.h"
#include "../library.h"

TEST_CASE("Arguments", "[FlowerpotArgumentsSpecs][Arguments]") {

    Flowerpot::Arguments arguments;

    SECTION("Only values") {
        std::list<std::string> values{"a", "b", "c"};
        auto parameters = arguments.ToParameters(values);
        REQUIRE(parameters.GetValues() == values);
    }

    SECTION("Only flags") {
        std::list<std::string> flags{"-a", "-b", "-c"};
        auto parameters = arguments.ToParameters(flags);
        REQUIRE(parameters.GetFlags() == flags);
    }

    SECTION("Only flag-value") {
        std::map<std::string, std::string> expectedResult{{"-a", "1"},
                                                          {"-b", "2"},
                                                          {"-c", "3"}};

        std::list<std::string> values{"-a", "1", "-b", "2", "-c", "3"};
        auto parameters = arguments.ToParameters(values);
        REQUIRE(parameters.GetKeyValue() == expectedResult);
    }

    SECTION("Mixed flags and values") {
        std::list<std::string> expectedValues{"a", "b", "c"};
        std::list<std::string> expectedFlags{"-a", "-b", "-c"};
        std::list<std::string> values{"a", "b", "c", "-a", "-b", "-c"};

        auto parameters = arguments.ToParameters(values);
        REQUIRE(parameters.GetValues() == expectedValues);
        REQUIRE(parameters.GetFlags() == expectedFlags);
    }

    SECTION("Mixed flags and flags-values") {
        std::list<std::string> expectedFlags{"-d", "-e", "-f"};
        std::map<std::string, std::string> expectedKeyValues{{"-a", "1"},
                                                             {"-b", "2"}};
        std::list<std::string> values {"-a", "1", "-b", "2", "-d", "-e", "-f"};

        auto parameters = arguments.ToParameters(values);
        REQUIRE(parameters.GetKeyValue() == expectedKeyValues);
        REQUIRE(parameters.GetFlags() == expectedFlags);
    }

    SECTION("Mixed values and flags-values") {
        std::list<std::string> expectedFlags{"-d", "-e", "-f"};
        std::map<std::string, std::string> expectedKeyValues{{"-a", "1"},
                                                             {"-b", "2"}};
        std::list<std::string> values {"-a", "1", "-b", "2", "-d", "-e", "-f"};

        auto parameters = arguments.ToParameters(values);
        REQUIRE(parameters.GetKeyValue() == expectedKeyValues);
        REQUIRE(parameters.GetFlags() == expectedFlags);
    }

    // TODO Add Specs for Windows params style
}