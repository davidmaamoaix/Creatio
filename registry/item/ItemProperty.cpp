#include "ItemProperty.h"

ItemProperty::ItemProperty(const std::string &name): IProperty(name) {

}

ItemProperty& ItemProperty::setStackSize(int size) {
    stackSize = size;
    return *this;
}

int ItemProperty::getStackSize() const {
    return stackSize;
}