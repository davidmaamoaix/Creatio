#pragma once

class Vec3f {

    public:
        Vec3f(float x, float y, float z);
        Vec3f(Vec3f &vec);
        Vec3f operator+(const Vec3f &other) const;
        Vec3f operator-(const Vec3f &other) const;
        Vec3f operator*(float scalar) const;
        Vec3f operator/(float scalar) const;
        Vec3f& operator=(const Vec3f &other);
        float getX() const;
        float getY() const;
        float getZ() const;

    private:
        float x;
        float y;
        float z;
};
