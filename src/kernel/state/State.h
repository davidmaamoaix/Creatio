#pragma once

#include "../../display/render/Camera.h"

class State {

    public:
        virtual bool tickRender(Camera &camera, float dt) = 0;
        virtual bool tickLogic(float dt) = 0;
        virtual bool tickInput() = 0;
};
