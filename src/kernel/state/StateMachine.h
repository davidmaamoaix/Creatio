#pragma once

#include <memory>
#include <vector>

#include "State.h"
#include "../../display/render/Camera.h"

class StateMachine {

    public:
        void pushState(std::shared_ptr<State> state);
        void popState();
        void tickRender(Camera &camera, float dt) const;
        void tickLogic(float dt) const;
        void tickInput() const;

    private:
        std::vector<std::shared_ptr<State>> states;
};
