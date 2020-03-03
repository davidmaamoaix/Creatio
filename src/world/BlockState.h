#pragma once

#include "../registry/block/Block.h"

class BlockState {

    public:
        explicit BlockState(const Block& block);
        const Block& getBlock() const;

    private:
        const Block& block;
};

