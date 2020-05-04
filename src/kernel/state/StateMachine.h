#pragma once

#include <memory>
#include <vector>

#include "State.h"
#include "../../display/render/Camera.h"

class StateMachine {

    public:
        void setState(std::shared_ptr<State> state);
        void tickRender(Camera &camera, float dt) const;
        void tickLogic(float dt) const;
        void tickInput() const;

    private:
        std::shared_ptr<State> state;
};
