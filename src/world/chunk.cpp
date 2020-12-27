#include "chunk.h"

BlockState Chunk::getState(const BlockPos &pos) const {
    return states[pos.getX() << 12 | pos.getY() << 4 | pos.getZ()];
}

void Chunk::setState(const BlockPos &pos, BlockState state) {
    states[pos.getX() << 12 | pos.getY() << 4 | pos.getZ()] = state;
}