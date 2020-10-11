#include <iostream>
#include "library.h"

int main(int count, char** vector) {
    const Flowerpot::Parser parser(count, vector);
    const Flowerpot::Arguments arguments;
    auto params = arguments.ToMap(parser.ToVector());
    auto values = params.GetValues();

    return 0;
}
