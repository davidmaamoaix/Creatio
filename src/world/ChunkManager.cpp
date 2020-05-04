#include "ChunkManager.h"

long ChunkManager::convertChunkPos(int xChunk, int zChunk) {
    return xChunk << sizeof(int) | zChunk;
}

std::shared_ptr<Chunk> ChunkManager::getChunk(int xChunk, int zChunk) {
    return chunks[convertChunkPos(xChunk, zChunk)];
}

std::shared_ptr<Chunk> ChunkManager::getChunkAtPos(int x, int z) {
    return getChunk(x << 4, z << 4);
}