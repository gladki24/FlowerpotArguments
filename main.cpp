#include <iostream>
#include "library.h"

int main(int count, char** vector) {
    const Flowerpot::Parser parser(count, vector);
    const Flowerpot::Arguments arguments;
    const auto params = arguments.ToMap(parser.ToVector());

    return 0;
}
