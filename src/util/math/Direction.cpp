#include "Direction.h"

const Direction Directions::UP{"up", 0, {0, 1, 0}};
const Direction Directions::DOWN{"down", 1, {0, -1, 0}};
const Direction Directions::NORTH{"north", 2, {1, 0, 0}};
const Direction Directions::SOUTH{"south", 3, {-1, 0, 0}};
const Direction Directions::EAST{"east", 4, {0, 0, 1}};
const Direction Directions::WEST{"west", 5, {0, 0, -1}};

const Direction& Directions::getDirectionFromIndex(int index) {
    switch (index) {
        case 0: return Directions::UP;
        case 1: return Directions::DOWN;
        case 2: return Directions::NORTH;
        case 3: return Directions::SOUTH;
        case 4: return Directions::EAST;
        case 5: return Directions::WEST;
        default: return Directions::UP;
    }
}

Direction::Direction(const std::string &name, int index, BlockPos dir)
: name{name}
, index{index}
, dir{dir}
{
}

const Direction& Direction::getOppposite() {
    return Directions::getDirectionFromIndex(index ^ 1);
}