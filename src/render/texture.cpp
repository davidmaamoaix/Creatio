#include "texture.h"

#define STB_IMAGE_IMPLEMENTATION
#include "../vendor/stb/stb_image.h"

Texture::Texture(const std::string &path) {
    glGenTextures(1, &textureId);
    glBindTexture(GL_TEXTURE_2D, textureId);

    stbi_set_flip_vertically_on_load(1);
    buffer = stbi_load(path.c_str(), &width, &height, &channels, 4);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
}

Texture::~Texture() {

}

void Texture::bind() const {
    glBindTexture(GL_TEXTURE_2D, textureId);
}

int Texture::getWidth() const {
    return width;
}

int Texture::getHeight() const {
    return height;
}