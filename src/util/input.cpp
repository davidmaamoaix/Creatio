#include "input.h"

#include <iostream>

bool keysDown[512];

void keyCallback(GLFWwindow *window, int key, int scan, int action, int mod) {
    if (action == GLFW_PRESS) keysDown[key] = true;
    else if (action == GLFW_RELEASE) keysDown[key] = false;
}

bool isKeyDown(int key) {
    return keysDown[key];
}

glm::vec2 getMouseMovement(GLFWwindow *window) {
    int width, height;
    glfwGetWindowSize(window, &width, &height);

    double x, y;
    glfwGetCursorPos(window, &x, &y);

    glfwSetCursorPos(window, (float) width / 2, (float) height / 2);

    return {(float) width / 2 - x, (float) height / 2 - y};
}