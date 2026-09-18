#pragma once

class Vec2 {
public:
    Vec2(float x, float y) : x_(x), y_(y) {}

    float x() const { return x_; }
    float y() const { return y_; }

    Vec2 operator+(const Vec2& other) const;

private:
    float x_;
    float y_;
};