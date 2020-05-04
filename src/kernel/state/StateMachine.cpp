#include "StateMachine.h"

void StateMachine::setState(std::shared_ptr<State> state) {
    this->state = state;
}

void StateMachine::tickRender(Camera &camera, float dt) const {
    state->tickRender(camera, dt);
}

void StateMachine::tickLogic(float dt) const {
    state->tickLogic(dt);
}

void StateMachine::tickInput() const {
    state->tickInput();
}