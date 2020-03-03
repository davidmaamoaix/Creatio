#include "BlockState.h"

BlockState::BlockState(const Block &block)
: block{block}
{

}

const Block& BlockState::getBlock() const {
    return block;
}