#include <glew.h>
#include <glfw3.h>
#include <iostream>

#include "src/config/settings.h"
#include "src/creatio/application.h"

int main() {

    Application &app = Application::get();

    if (!app.launch()) {
        std::cout << "LAUNCHING FAILED" << std::endl;
    }

    app.loop();

    return 0;
}