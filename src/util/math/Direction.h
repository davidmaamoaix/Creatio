#pragma once

#include <string>
#include "BlockPos.h"

class Direction {

    public:
        Direction(const std::string &name, int index, BlockPos dir);
        Direction getOppposite();

    private:
        std::string name;
        int index;
        BlockPos dir;
};

namespace Directions {
    extern const Direction UP;
    extern const Direction DOWN;
    extern const Direction NORTH;
    extern const Direction SOUTH;
    extern const Direction EAST;
    extern const Direction WEST;

    extern Direction getDirectionFromIndex(int index);
}


