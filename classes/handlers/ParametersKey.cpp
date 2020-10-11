//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersKey.h"

namespace Flowerpot {
    void ParametersKey::Handle(ParametersBuilder& parameters) {
        parameters.AddFlag(element->data());
    }

    ParametersKey::ParametersKey(iterator &element, iterator next) : ParametersHandler(element, next) { }

    unsigned int ParametersKey::UnspecifiedKeyCounter = 1;
}