#ifndef CREATIO_CHUNK_H
#define CREATIO_CHUNK_H


#include "../block/blockstate.h"
#include "../util/math/blockpos.h"

class Chunk {

public:
    BlockState getState(BlockPos pos);
};


#endif //CREATIO_CHUNK_H
