#pragma once

#include "../state/StateMachine.h"
#include "../../registry/block/Blocks.h"

class Creatio {

    public:
        static Creatio& get();
        Creatio();
        Blocks& blocks();

    private:
        StateMachine stateMachine;
        Blocks allBlocks;
};
