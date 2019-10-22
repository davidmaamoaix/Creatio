#pragma once

#include <vector>

#include "../../util/struct/Singleton.h"
#include "State.h"
#include "../../display/render/Camera.h"

class StateMachine {

    public:
        void pushState(State &state);
        State& popState();
        void tickRender(Camera &camera, float dt) const;
        void tickLogic(float dt) const;
        void tickInput() const;

    private:
        std::vector<State&> states;
};
