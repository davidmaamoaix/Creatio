#pragma once

typedef int Direction;

namespace Facing {

    enum Directions {
        DOWN = 0,
        UP = 1,
        NORTH = 2,
        SOUTH = 3,
        WEST = 4,
        EAST = 5
    };

    Direction opposite(Direction);
}