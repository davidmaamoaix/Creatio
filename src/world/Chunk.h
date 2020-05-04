#pragma once

#include <memory>

#include "BlockState.h"
#include "../display/render/RenderChunk.h"

class Chunk {

    public:
        static inline int convertPos(int x, int y, int z);
        std::shared_ptr<BlockState> getState(int pos);
        std::shared_ptr<BlockState> getState(int x, int y, int z);
        void setState(std::shared_ptr<BlockState> state, int x, int y, int z);

    private:
        std::shared_ptr<BlockState> blockStates[16 * 16 * 256];
        RenderChunk renderChunks[16];
};


