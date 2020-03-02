#include "IRegistry.h"

IRegistry::IRegistry(const std::string &name)
: registryName{name}
{
}

const std::string& IRegistry::getRegistryName() const {
    return registryName;
}