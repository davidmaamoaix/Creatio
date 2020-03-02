#pragma once

#include "../IRegistry.h"

class Block: private IRegistry {

    public:
        explicit Block(const std::string &name);
};
