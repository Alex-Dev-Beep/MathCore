#pragma once

class Vec4 {
public:
    Vec4(float x, float y, float z, float w) : x_(x), y_(y), z_(z), w_(w) {}

    float x() const { return x_; }
    float y() const { return y_; }
    float z() const { return z_; }
    float w() const { return w_; }

    Vec4 operator+(const Vec4& other) const;

private:
    float x_;
    float y_;
    float z_;
    float w_;
};