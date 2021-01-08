#pragma once

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <unordered_set>

namespace Input {
    extern bool keysDown[];

    void keyCallback(GLFWwindow *, int, int, int, int);
    bool isKeyDown(int);
}