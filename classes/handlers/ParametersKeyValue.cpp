//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersKeyValue.h"

namespace Flowerpot {
    void ParametersKeyValue::Handle(ParametersBuilder& builder) {
        builder.AddKeyValue(pair(element->data(), nextElement->data()));
    }

    ParametersKeyValue::ParametersKeyValue(iterator &element, iterator next) : ParametersHandler(element, next) { }
}
