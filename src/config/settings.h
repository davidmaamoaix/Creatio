#pragma once

#define WINDOW_WIDTH 720 //1280
#define WINDOW_HEIGHT 720
#define WINDOW_TITLE "Creatio"

class Settings {

public:
    static float FOV;
    static float SENSITIVITY;

    static void loadSettings();
};