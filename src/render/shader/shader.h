#pragma once

#define GL_SILENCE_DEPRECATION

#include <glfw3.h>
#include <string>

class Shader {

public:
    Shader(const std::string &vertPath, const std::string &fragPath);
    ~Shader();
    void bind();

private:
    GLuint program;
};