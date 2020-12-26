#pragma once

#include "blockpos.h"

typedef int Direction;

namespace Facing {

    extern const Direction DOWN = 0;
    extern const Direction UP = 1;
    extern const Direction NORTH = 2;
    extern const Direction SOUTH = 3;
    extern const Direction WEST = 4;
    extern const Direction EAST = 5;

    Direction opposite(Direction);
    BlockPos offset(Direction);
}