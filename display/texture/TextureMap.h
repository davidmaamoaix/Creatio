#pragma once

#include <map>
#include <string>

#include "../../util/struct/Singleton.h"

class TextureMap{

    public:
        void addTextureLink(const std::string &index, int pos);

    private:
        std::map<std::string, int> texturePos;
};
