#include "blockpos.h"

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

BlockPos BlockPos::operator+(BlockPos other) {
    return {x + other.x, y + other.y, z + other.z};
}

BlockPos BlockPos::operator-(BlockPos other) {
    return {x - other.x, y - other.y, z - other.z};
}

BlockPos BlockPos::operator*(float scalar) {
    return {x * scalar, y * scalar, z * scalar};
}

BlockPos BlockPos::operator/(float scalar) {
    return {x / scalar, y / scalar, z / scalar};
}

BlockPos BlockPos::offset(Direction dir) {
    return (*this) + Facing::offset(dir);
}

BlockPos BlockPos::offset(Direction dir, int distance) {
    return (*this) + Facing::offset(dir) * distance;
}