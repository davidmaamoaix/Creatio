#pragma once

#include "../../display/texture/TextureMap.h"
#include "../state/StateMachine.h"

class Creatio {

    public:
        static Creatio& getInstance();

    private:
        TextureMap textureMap;
        StateMachine stateMachine;
};
