#pragma once

class Application {

public:
    static Application &get();
    Application(const Application &) = delete;
    void operator=(const Application &) = delete;

private:
    Application() = default;
};