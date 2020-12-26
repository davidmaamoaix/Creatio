#pragma once

#include "facing.h"

/*
 * BlockPos is immutable;
 */
class BlockPos {

public:
    BlockPos(int, int, int);
    BlockPos(float, float, float);
    BlockPos operator+(BlockPos);
    BlockPos operator-(BlockPos);
    BlockPos operator*(float);
    BlockPos operator/(float);
    BlockPos offset(Direction);
    BlockPos offset(Direction, int);

private:
    int x, y, z;
};