#include "blockstate.h"

BlockState::BlockState()
: block(nullptr) // TODO: change to AIR block later
, meta(0) {

}

BlockState::BlockState(Block *type, int metadata)
: block(type)
, meta(metadata) {

}

BlockState BlockState::setMeta(int metadata) const {
    return {block, metadata};
}

Block* BlockState::getBlock() const {
    return block;
}

int BlockState::getMeta() const {
    return meta;
}