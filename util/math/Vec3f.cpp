#include "Vec3f.h"

Vec3f::Vec3f(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Vec3f::Vec3f(Vec3f &vec) {
    x = vec.getX();
    y = vec.getY();
    z = vec.getZ();
}

Vec3f Vec3f::operator+(const Vec3f &other) const {
    return Vec3f{x + other.getX(), y + other.getY(), z + other.getZ()};
}

Vec3f Vec3f::operator-(const Vec3f &other) const {
    return Vec3f{x - other.getX(), y - other.getY(), z - other.getZ()};
}

Vec3f Vec3f::operator*(float scalar) const {
    return Vec3f{x * scalar, y * scalar, z * scalar};
}

Vec3f Vec3f::operator/(float scalar) const {
    return Vec3f{x / scalar, y / scalar, z / scalar};
}

float Vec3f::getX() const {
    return x;
}

float Vec3f::getY() const {
    return y;
}

float Vec3f::getZ() const {
    return z;
}
