#include "Vec2.h"

Vec2 Vec2::operator+(const Vec2& other) const {
    return Vec2(x_ + other.x_, y_ + other.y_);
}