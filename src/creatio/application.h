#pragma once

#define GL_SILENCE_DEPRECATION

#include <glfw3.h>

class Application {

public:
    static Application &get();
    Application(const Application &) = delete;
    void operator=(const Application &) = delete;
    bool launch();
    void loop();

private:
    GLFWwindow *window;
    Application() = default;
};