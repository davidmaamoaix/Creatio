#pragma once

#include <unordered_map>
#include <unordered_set>

#include "chunk.h"

typedef std::pair<int, int> ChunkPos;

class World {

private:
    std::unordered_map<ChunkPos, Chunk *> chunks;
    std::unordered_set<ChunkPos> loadedChunks;
};