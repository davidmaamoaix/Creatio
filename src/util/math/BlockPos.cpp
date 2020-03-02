#include <cmath>

#include "BlockPos.h"

BlockPos::BlockPos(int x, int y, int z)
: x{x}
, y{y}
, z{z}
{
}

BlockPos::BlockPos(float x, float y, float z)
: x{(int) x}
, y{(int) y}
, z{(int) z}
{
}

BlockPos::BlockPos(const BlockPos &pos)
: x{pos.getX()}
, y{pos.getY()}
, z{pos.getZ()}
{
}

BlockPos::BlockPos(const Vec3f &vec)
: x{(int) vec.getX()}
, y{(int) vec.getY()}
, z{(int) vec.getZ()}
{
}

BlockPos BlockPos::operator+(const BlockPos &other) const {
    return {x + other.getX(), y + other.getY(), z + other.getZ()};
}

BlockPos BlockPos::operator*(float scalar) const {
    return {x * scalar, y * scalar, z * scalar};
}

BlockPos& BlockPos::operator=(const BlockPos &other) {
    if (this != &other) {
        x = other.getX();
        y = other.getY();
        z = other.getZ();
    }

    return *this;
}

BlockPos BlockPos::add(int x, int y, int z) const {
    return {this->x + x, this->y + y, this->z + z};
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