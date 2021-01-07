#include "logging.h"

#include <GLFW/glfw3.h>
#include <iostream>

void Logging::printVersions() {
    std::cout << "Launching Creatio 0.1" << std::endl;

    std::cout << "OpenGL Version: " << glGetString(GL_VERSION);
    std::cout << std::endl;

    std::cout << "GLSL Versions: ";
    std::cout << glGetString(GL_SHADING_LANGUAGE_VERSION);
    std::cout << std::endl;

    std::cout << std::endl;
}

void Logging::logGLError() {
    while (GLenum error = glGetError()) {
        std::cout << "OPENGL ERROR: " << error << std::endl;
    }
}