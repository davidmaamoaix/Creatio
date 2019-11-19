#pragma once

#include <string>

class IProperty {

    public:
        explicit IProperty(const std::string &name);
        const std::string& getRegistryName();

    private:
        std::string registryName;
};
