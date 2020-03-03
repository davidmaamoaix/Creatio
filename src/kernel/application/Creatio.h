#pragma once

#include "../state/StateMachine.h"

class Creatio {

    public:
        static Creatio& getInstance();

    private:
        StateMachine stateMachine;
};
