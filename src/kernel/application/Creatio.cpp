#include "Creatio.h"
#include "../../logging/CrashCause.h"

Creatio::Creatio() = default;

Creatio& Creatio::get() {
    static Creatio creatio;
    return creatio;
}

Blocks& Creatio::blocks() {
    return allBlocks;
}

void Creatio::launch() {
    window.launch();
}

void Creatio::terminate() {

    window.close();
}

void Creatio::setError(const std::string &cause, const std::string &info) {
    crashLog = std::make_unique<CrashLog>(cause, info);
    stateMachine.setState(States::ERROR_STATE);
}