#pragma once

#include <string>
#include <glew.h>

class Texture {

public:
    explicit Texture(const std::string &);
    ~Texture();
    void bind() const;
    int getWidth() const;
    int getHeight() const;

private:
    int width, height, channels;
    GLuint textureId;
    unsigned char *buffer;
};