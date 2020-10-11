//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersKeyValue.h"

namespace Flowerpot {
    pair ParametersKeyValue::Handle() {
        pair pair(element->data(), nextElement->data());
        element++;
        return pair;
    }

    ParametersKeyValue::ParametersKeyValue(iterator &element, iterator next) : ParametersHandler(element, next) { }
}
