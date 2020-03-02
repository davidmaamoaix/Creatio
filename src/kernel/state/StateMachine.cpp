#include "StateMachine.h"

void StateMachine::pushState(std::shared_ptr<State> state) {
    states.push_back(state);
}

void StateMachine::popState() {
    states.erase(states.end());
}

void StateMachine::tickRender(Camera &camera, float dt) const {
    for (auto i: states) {
        if (!i->tickRender(camera, dt)) return;
    }
}

void StateMachine::tickLogic(float dt) const {
    for (auto i: states) {
        if (!i->tickLogic(dt)) return;
    }
}

void StateMachine::tickInput() const {
    for (auto i: states) {
        if (!i->tickInput()) return;
    }
}