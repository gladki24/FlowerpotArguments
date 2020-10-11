//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersValue.h"

namespace Flowerpot {
    void ParametersValue::Handle(ParametersBuilder& parameters) {
        parameters.AddValue(element->data());
    }

    ParametersValue::ParametersValue(iterator &element, iterator next) : ParametersHandler(element, next) { }
}
