#include "IProperty.h"

IProperty::IProperty(const std::string &name) {
    registryName = name;
}

const std::string& IProperty::getRegistryName() {
    return registryName;
}