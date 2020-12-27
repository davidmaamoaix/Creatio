#include "hashing.h"

size_t ChunkPosHash::operator()(const std::pair<int, int> &p) const {
    return std::hash<int>()(p.first) ^ std::hash<int>()(p.second);
}