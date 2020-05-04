#pragma once

#include <memory>

#include "../../display/render/Camera.h"

class State {

    public:
        virtual void tickRender(Camera &camera, float dt) = 0;
        virtual void tickLogic(float dt) = 0;
        virtual void tickInput() = 0;
};

namespace States {

    extern const std::shared_ptr<State> ERROR_STATE;
}