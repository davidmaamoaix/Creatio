#pragma once

class Singleton {

    public:
        Singleton(Singleton& other) = delete;
        void operator=(Singleton& other) = delete;

    protected:
        Singleton();
};
