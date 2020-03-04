#include "BlockState.h"
#include "../kernel/application/Creatio.h"

std::shared_ptr<BlockState> BlockState::air() {
    return std::make_shared<BlockState>(Creatio::get().blocks().AIR);
}

std::shared_ptr<BlockState> BlockState::ofBlock(const Block &block) {
    return std::make_shared<BlockState>(block);
}

BlockState::BlockState(const Block &block)
: block{block}
{

}

BlockState::BlockState(const BlockState &state)
: block{state.getBlock()}
{

}

const Block& BlockState::getBlock() const {
    return block;
}