#pragma once


#include "../../util/struct/Singleton.h"

class TextureMap: private Singleton {

    public:
        TextureMap& getInstance() const;
};
