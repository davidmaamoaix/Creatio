#include "TextureMap.h"

TextureMap& TextureMap::getInstance() const {
    static TextureMap map;

    return map;
}