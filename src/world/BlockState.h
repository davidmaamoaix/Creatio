#pragma once

#include "../registry/block/Block.h"

class BlockState {

    public:
        static std::shared_ptr<BlockState> air();
        static std::shared_ptr<BlockState> ofBlock(const Block &block);
        explicit BlockState(const Block &block);
        BlockState(const BlockState &state);
        const Block& getBlock() const;

    private:
        const Block& block;
};

