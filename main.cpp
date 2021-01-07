#include <iostream>

#include "config/settings.h"
#include "creatio/application.h"

int main() {

    Application &app = Application::get();

    if (!app.launch()) {
        std::cout << "LAUNCHING FAILED" << std::endl;
    }

    app.loop();

    return 0;
}