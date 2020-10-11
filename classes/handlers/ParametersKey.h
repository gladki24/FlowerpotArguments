//
// Created by Seweryn on 11.10.2020.
//

#ifndef FLOWERPOTARGUMENTS_PARAMETERSKEY_H

#include "ParametersHandler.h"

#define FLOWERPOTARGUMENTS_PARAMETERSKEY_H

namespace Flowerpot {
    class ParametersKey : public ParametersHandler {
    public:
        ParametersKey(iterator& element, iterator next);
        ~ParametersKey() override = default;
        void Handle(ParametersBuilder& parameters) override;

    private:
        static unsigned int UnspecifiedKeyCounter;
    };
}


#endif //FLOWERPOTARGUMENTS_PARAMETERSKEY_H
