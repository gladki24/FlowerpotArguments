//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSVALUE_H

#include "ParametersHandler.h"

#define FLOWERPOTARGUMENTS_PARAMETERSVALUE_H

namespace Flowerpot {
    class ParametersValue : public ParametersHandler {
    public:
        ParametersValue(iterator& element, iterator next);
        ~ParametersValue() override = default;
        pair Handle() override;

    private:
        static unsigned int UnspecifiedValueCounter;
    };
}

#endif //FLOWERPOTARGUMENTS_PARAMETERSVALUE_H
