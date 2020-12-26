#include "chunk.h"

BlockState Chunk::getState(BlockPos pos) {
    return states[pos.getX() << 12 | pos.getY() << 4 | pos.getZ()];
}

void Chunk::setState(BlockPos pos, BlockState state) {
    states[pos.getX() << 12 | pos.getY() << 4 | pos.getZ()] = state;
}