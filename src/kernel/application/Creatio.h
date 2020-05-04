#pragma once

#include "../state/StateMachine.h"
#include "../../registry/block/Blocks.h"
#include "../../logging/CrashLog.h"
#include "Window.h"

class Creatio {

    public:
        static Creatio& get();
        Blocks& blocks();
        void launch();
        void terminate();
        void setError(const std::string &cause, const std::string &info);

    private:
        Window window;
        StateMachine stateMachine;

        Blocks allBlocks;
        std::unique_ptr<CrashLog> crashLog;
        Creatio();
};
