#pragma once

#include <string>

#include "../IRegistry.h"

class Item: private IRegistry {

    public:
        explicit Item(const std::string &name);
};
