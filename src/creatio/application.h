#pragma once

#include <glfw3.h>

class Application {

public:
    static Application &get();
    Application(const Application &) = delete;
    void operator=(const Application &) = delete;
    bool init();
    bool launch();

private:
    GLFWwindow *window;
    Application() = default;
};