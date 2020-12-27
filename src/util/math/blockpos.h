#pragma once

#include "facing.h"

/*
 * BlockPos is immutable;
 */
class BlockPos {

public:
    static BlockPos fromDirection(Direction);

    BlockPos(int, int, int);
    BlockPos(float, float, float);
    BlockPos operator+(BlockPos) const;
    BlockPos operator-(BlockPos) const;
    BlockPos operator*(float) const;
    BlockPos operator/(float) const;
    BlockPos offset(Direction) const;
    BlockPos offset(Direction, int) const;
    int getX() const;
    int getY() const;
    int getZ() const;

private:
    int x, y, z;
};