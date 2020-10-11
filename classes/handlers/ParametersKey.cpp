//
// Created by Seweryn on 11.10.2020.
//

#include "ParametersKey.h"

namespace Flowerpot {
    pair ParametersKey::Handle() {
        return pair(element->data(), std::to_string(UnspecifiedKeyCounter++));
    }

    ParametersKey::ParametersKey(iterator &element, iterator next) : ParametersHandler(element, next) { }

    unsigned int ParametersKey::UnspecifiedKeyCounter = 1;
}