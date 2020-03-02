#include "Vec3f.h"

Vec3f::Vec3f(float x, float y, float z)
: x{x}
, y{y}
, z{z}
{
}

Vec3f::Vec3f(const Vec3f &vec)
: x{vec.getX()}
, y{vec.getY()}
, z{vec.getZ()}
{
}

Vec3f Vec3f::operator+(const Vec3f &other) const {
    return {x + other.getX(), y + other.getY(), z + other.getZ()};
}

Vec3f Vec3f::operator-(const Vec3f &other) const {
    return {x - other.getX(), y - other.getY(), z - other.getZ()};
}

Vec3f Vec3f::operator*(float scalar) const {
    return {x * scalar, y * scalar, z * scalar};
}

Vec3f Vec3f::operator/(float scalar) const {
    return {x / scalar, y / scalar, z / scalar};
}

Vec3f& Vec3f::operator=(const Vec3f &other) {
    if (this != &other) {
        x = other.getX();
        y = other.getY();
        z = other.getZ();
    }

    return *this;
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
