#pragma once

#define GL_SILENCE_DEPRECATION

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "render/camera.h"

class Application {

public:
    static Application &get();
    Application(const Application &) = delete;
    void operator=(const Application &) = delete;

    bool launch();
    void loop();

private:
    GLFWwindow *window;
    Camera camera;

    Application();
};