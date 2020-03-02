#pragma once

#include <string>

class IRegistry {

    public:
        explicit IRegistry(const std::string &name);
        const std::string& getRegistryName() const;

    private:
        std::string registryName;
};
