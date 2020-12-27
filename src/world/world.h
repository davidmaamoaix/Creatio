#pragma once

#include <unordered_map>
#include <unordered_set>

#include "chunk.h"
#include "../util/math/hashing.h"

typedef std::pair<int, int> ChunkPos;

class World {

public:
    void loadChunk(ChunkPos);
    void unloadChunk(ChunkPos);

private:
    std::unordered_map<ChunkPos, Chunk *, ChunkPosHash> chunks;
    std::unordered_set<ChunkPos, ChunkPosHash> loadedChunks;
};