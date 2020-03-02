#include "TextureMap.h"

void TextureMap::addTextureLink(const std::string &index, int pos) {
    texturePos.insert({index, pos});
}