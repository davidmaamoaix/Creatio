#include "Window.h"
#include "../../logging/CrashCause.h"
#include "Creatio.h"

Window::Window() {
    if (!glfwInit()) {
        Creatio::get().setError(
            CrashCause::GLFW_ERROR, "GLFW failed to initialize");
    }
}

void Window::swapBuffers() {
    glfwSwapBuffers(window);
}

void Window::launch() {

}

void Window::close() {
    glfwTerminate();
}