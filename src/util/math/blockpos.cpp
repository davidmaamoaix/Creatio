#include "blockpos.h"

BlockPos BlockPos::fromDirection(Direction dir) {
    switch (dir) {
        case Facing::DOWN: return {0, -1, 0};
        case Facing::UP: return {0, 1, 0};
        case Facing::NORTH: return {0, 0, -1};
        case Facing::SOUTH: return {0, 0, 1};
        case Facing::WEST: return {-1, 0, 0};
        case Facing::EAST: return {1, 0, 0};
        default: return {0, 0, 0};
    }
}

BlockPos::BlockPos(int xPos, int yPos, int zPos)
: x(xPos)
, y(yPos)
, z(zPos) {

}

BlockPos::BlockPos(float xPos, float yPos, float zPos)
: x((int) xPos)
, y((int) yPos)
, z((int) zPos) {

}

BlockPos BlockPos::operator+(BlockPos other) const {
    return {x + other.x, y + other.y, z + other.z};
}

BlockPos BlockPos::operator-(BlockPos other) const {
    return {x - other.x, y - other.y, z - other.z};
}

BlockPos BlockPos::operator*(float scalar) const {
    return {x * scalar, y * scalar, z * scalar};
}

BlockPos BlockPos::operator/(float scalar) const {
    return {x / scalar, y / scalar, z / scalar};
}

BlockPos BlockPos::offset(Direction dir) const {
    return (*this) + fromDirection(dir);
}

BlockPos BlockPos::offset(Direction dir, int distance) const {
    return (*this) + fromDirection(dir) * distance;
}

int BlockPos::getX() const {
    return x;
}

int BlockPos::getY() const {
    return y;
}

int BlockPos::getZ() const {
    return z;
}