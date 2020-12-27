#pragma once

#include <cstdio>
#include <utility>

class ChunkPosHash {

public:
    size_t operator()(const std::pair<int, int> &p) const;
};