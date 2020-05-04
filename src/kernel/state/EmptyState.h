#pragma once

#include "State.h"

class EmptyState: public State {

    public:
        void tickRender(Camera &camera, float dt) override;
        void tickLogic(float dt) override;
        void tickInput() override;
};

