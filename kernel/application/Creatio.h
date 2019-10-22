#pragma once

#include "../../util/struct/Singleton.h"
#include "../../display/texture/TextureMap.h"
#include "../state/StateMachine.h"

class Creatio: private Singleton {

    public:
        static Creatio& getInstance();

    private:
        TextureMap textureMap;
        StateMachine stateMachine;
};
