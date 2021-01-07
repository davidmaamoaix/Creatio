#pragma once

#include "block/blockstate.h"
#include "util/math/blockpos.h"

class Chunk {

public:
    BlockState getState(const BlockPos &) const; // pos relative to chunk pos
    void setState(const BlockPos &, BlockState);

private:
    BlockState states[16 * 256 * 16];
};