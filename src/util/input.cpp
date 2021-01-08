#include "input.h"

#include <iostream>

bool Input::keysDown[512];

void Input::keyCallback(GLFWwindow *window, int key, int scan, int action, int mod) {
    if (action == GLFW_PRESS) keysDown[key] = true;
    else if (action == GLFW_RELEASE) keysDown[key] = false;
}

bool Input::isKeyDown(int key) {
    return keysDown[key];
}