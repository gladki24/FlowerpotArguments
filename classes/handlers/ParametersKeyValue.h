//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSKEYVALUE_H

#include "ParametersHandler.h"

#define FLOWERPOTARGUMENTS_PARAMETERSKEYVALUE_H

namespace Flowerpot {
    class ParametersKeyValue : public ParametersHandler {
    public:
        ParametersKeyValue(iterator& element, iterator next);
        ~ParametersKeyValue() override = default;
        void Handle(ParametersBuilder& parameters) override;
    };
}


#endif //FLOWERPOTARGUMENTS_PARAMETERSKEYVALUE_H
