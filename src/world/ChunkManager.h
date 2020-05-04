#pragma once

#include <unordered_map>

#include "Chunk.h"

class ChunkManager {

    public:
        static inline long convertChunkPos(int xChunk, int zChunk);
        std::shared_ptr<Chunk> getChunk(int xChunk, int zChunk);
        std::shared_ptr<Chunk> getChunkAtPos(int x, int z);

    private:
        std::unordered_map<long, std::shared_ptr<Chunk>> chunks;
};

