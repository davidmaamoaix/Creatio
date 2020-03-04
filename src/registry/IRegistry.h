#pragma once

#include <string>

class IRegistry {

    public:
        explicit IRegistry(const std::string &name);
        IRegistry(const IRegistry &iRegistry) = delete;
        const std::string& getRegistryName() const;

    private:
        std::string registryName;
};
