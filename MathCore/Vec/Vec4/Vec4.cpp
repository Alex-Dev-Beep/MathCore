#include "Vec4.h"

Vec4 Vec4::operator+(const Vec4& other) const {
    return Vec4(x_ + other.x_, y_ + other.y_, z_ + other.z_, w_ + other.w_);
}