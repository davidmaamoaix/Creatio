#include "blockstate.h"

BlockState::BlockState(Block *type, int metadata)
: block(type)
, meta(metadata) {

}

BlockState BlockState::setMeta(int metadata) {
    return {block, metadata};
}

Block* BlockState::getBlock() {
    return block;
}

int BlockState::getMeta() {
    return meta;
}