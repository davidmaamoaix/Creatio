#pragma once

#include "Vec3f.h"

class BlockPos {

    public:
        BlockPos(int x, int y, int z);
        BlockPos(float x, float y, float z);
        BlockPos(const BlockPos &pos);
        explicit BlockPos(const Vec3f &vec);
        BlockPos operator+(const BlockPos &other) const;
        BlockPos operator*(float scalar) const;
        BlockPos& operator=(const BlockPos &other);
        BlockPos add(int x, int y, int z) const;
        int getX() const;
        int getY() const;
        int getZ() const;

    private:
        int x;
        int y;
        int z;

};
