#pragma once

class Vec3 {
public:
    Vec3(float x, float y, float z) : x_(x), y_(y), z_(z) {}

    float x() const { return x_; }
    float y() const { return y_; }
    float z() const { return z_; }

    Vec3 operator+(const Vec3& other) const;

private:
    float x_;
    float y_;
    float z_;
};