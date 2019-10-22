#include "StateMachine.h"

void StateMachine::pushState(State &state) {
    states.push_back(state);
}

State& StateMachine::popState() {
    State &state = states.back();
    states.erase(states.end());
    return state;
}

void StateMachine::tickRender(Camera &camera, float dt) const {
    for (State &i: states) {
        if (!i.tickRender(camera, dt)) return;
    }
}

void StateMachine::tickLogic(float dt) const {
    for (State &i: states) {
        if (!i.tickLogic(dt)) return;
    }
}

void StateMachine::tickInput() const {
    for (State &i: states) {
        if (!i.tickInput()) return;
    }
}