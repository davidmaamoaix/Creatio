#pragma once

#include <memory>
#include "BlockState.h"

class Chunk {

    private:
        std::shared_ptr<BlockState> blockStates[16 * 16 * 256];
};


