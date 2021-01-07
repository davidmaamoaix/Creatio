#include <iostream>

#include "creatio/application.h"

int main() {

    Application &app = Application::get();

    if (!app.launch()) {
        std::cout << "LAUNCHING FAILED" << std::endl;
    }

    app.loop();

    return 0;
}