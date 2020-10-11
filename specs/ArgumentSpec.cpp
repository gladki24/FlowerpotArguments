//
// Created by Seweryn on 12.10.2020.
//

#define CATCH_CONFIG_MAIN // provides main(); this line is required in only one .cpp file
#include "./catch.h"
#include "../library.h"

TEST_CASE("Arguments", "[Arguments]") {

    Flowerpot::Arguments arguments;

    SECTION("Only values") {
        std::list<std::string> values { "a", "b", "c" };
        auto parameters = arguments.ToParameters(values);
        REQUIRE(parameters.GetValues() == values);
    }

    SECTION("Only flags") {
        std::list<std::string> flags { "-a", "-b", "-c" };
        auto parameters = arguments.ToParameters(flags);
        REQUIRE(parameters.GetFlags() == flags);
    }
}