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
    BlockPos operator+(BlockPos);
    BlockPos operator-(BlockPos);
    BlockPos operator*(float);
    BlockPos operator/(float);
    BlockPos offset(Direction);
    BlockPos offset(Direction, int);
    int getX();
    int getY();
    int getZ();

private:
    int x, y, z;
};