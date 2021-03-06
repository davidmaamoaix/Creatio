#ifndef CREATIO_BLOCKSTATE_H
#define CREATIO_BLOCKSTATE_H


#include "block.h"

/*
 * BlockState is immutable.
 */
class BlockState {

public:
    BlockState();
    BlockState(Block *, int meta);
    BlockState setMeta(int meta) const;
    Block *getBlock() const;
    int getMeta() const;

private:
    Block *block;
    int meta;
};


#endif //CREATIO_BLOCKSTATE_H
