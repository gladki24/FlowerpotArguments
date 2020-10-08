#include <iostream>
#include "library.h"

int main(int count, char** vector) {
    const Flowerpot::Parser parser(count, vector);
    auto arguments = parser.toVector();

    std::cout << "Program name: " << parser.getProgramName() << std::endl;

    for (const auto & argument : arguments) {
        std::cout << argument << ", ";
    }

    return 0;
}
