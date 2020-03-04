#include "Chunk.h"

int Chunk::convertPos(int x, int y, int z) {
    return x << 12 | y << 4 | z;
}

std::shared_ptr<BlockState> Chunk::getState(int pos) {
    return blockStates[pos];
}

std::shared_ptr<BlockState> Chunk::getState(int x, int y, int z) {
    return getState(convertPos(x, y, z));
}

void Chunk::setState(std::shared_ptr<BlockState> state, int x, int y, int z) {
    blockStates[convertPos(x, y, z)] = std::move(state);
}