//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSVALUE_H

#include "ParametersHandler.h"

#define FLOWERPOTARGUMENTS_PARAMETERSVALUE_H

namespace Flowerpot {
    class ParametersValue : public ParametersHandler {
        friend class Parameters;
    public:
        ParametersValue(iterator& element, iterator next);
        ~ParametersValue() override = default;
        void Handle(ParametersBuilder& parameters) override;
    };
}

#endif //FLOWERPOTARGUMENTS_PARAMETERSVALUE_H
