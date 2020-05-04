#include "State.h"
#include "EmptyState.h"

const std::shared_ptr<State> States::ERROR_STATE =
    std::make_unique<EmptyState>();