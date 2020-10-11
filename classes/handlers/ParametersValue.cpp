//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersValue.h"

namespace Flowerpot {
    pair ParametersValue::Handle() {
        return pair(std::to_string(UnspecifiedValueCounter++), element->data());
    }

    ParametersValue::ParametersValue(iterator &element, iterator next) : ParametersHandler(element, next) { }

    unsigned int ParametersValue::UnspecifiedValueCounter = 1;
}
