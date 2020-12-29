#include "shader.h"

#include <glfw3.h>
#include <iostream>

static GLuint loadShaderFile(GLuint type, const std::string &path) {
    GLuint id = glCreateShader(type);

    const char *src = path.c_str();
    glShaderSource(id, 1, &src, nullptr);
    glCompileShader(id);

    int result;
    glGetShaderiv(id, GL_COMPILE_STATUS, &result);
    if (result == GL_FALSE) {
        int logLen;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &logLen);
        char *log = new char[logLen];
        glGetShaderInfoLog(id, logLen, &logLen, log);

        std::cout << "SHADER COMPILATION FAILED: " << path << std::endl;
        std::cout << log << std::endl;

        delete[] log;
    }

    return id;
}

Shader::Shader(const std::string &vertPath, const std::string &fragPath) {
    GLuint vertId = loadShaderFile(GL_VERTEX_SHADER, vertPath);
    GLuint fragId = loadShaderFile(GL_FRAGMENT_SHADER, fragPath);

    /*program = glCreateProgram();
    glAttachShader(program, vertId);
    glAttachShader(program, fragId);
    glLinkProgram(program);
    glValidateProgram(program);

    glDeleteShader(vertId);
    glDeleteShader(fragId);*/
}

Shader::~Shader() {

}

void Shader::bind() {

}