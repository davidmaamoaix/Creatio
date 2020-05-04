#pragma once

#include <glfw3.h>

class Window {

    public:
        Window();
        void launch();
        void close();

        void swapBuffers();

    private:
        GLFWwindow* window;
};

