#pragma once

#include "../block/blockstate.h"
#include "../util/math/blockpos.h"

class Chunk {

public:
    BlockState getState(BlockPos); // pos relative to chunk pos
    void setState(BlockPos, BlockState);

private:
    BlockState states[16 * 256 * 16];
};