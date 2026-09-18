#include "Vec3.h"

Vec3 Vec3::operator+(const Vec3& other) const {
    return Vec3(x_ + other.x_, y_ + other.y_, z_ + other.z_);
}