#pragma once

#include <string>
#include "../IProperty.h"

class ItemProperty: private IProperty {

    public:
        explicit ItemProperty(const std::string &name);
        ItemProperty& setStackSize(int size);
        int getStackSize() const;

    private:
        int stackSize;
};
