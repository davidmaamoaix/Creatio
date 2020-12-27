#include "world.h"

void World::loadChunk(ChunkPos pos) {
    loadedChunks.insert(pos);
}

void World::unloadChunk(ChunkPos pos) {
    loadedChunks.erase(pos);
}