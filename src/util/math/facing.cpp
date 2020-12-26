#include "facing.h"

Direction Facing::opposite(Direction dir) {
    return dir ^ 1;
}

BlockPos Facing::offset(Direction dir) {
    switch (dir) {
        case DOWN: return {0, -1, 0};
        case UP: return {0, 1, 0};
        case NORTH: return {0, 0, -1};
        case SOUTH: return {0, 0, 1};
        case WEST: return {-1, 0, 0};
        case EAST: return {1, 0, 0};
        default: return {0, 0, 0};
    }
}