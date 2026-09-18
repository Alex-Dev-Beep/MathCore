#include "Mat4x4.h"

Mat4x4::Mat4x4(
    float m00, float m01, float m02, float m03,
    float m10, float m11, float m12, float m13,
    float m20, float m21, float m22, float m23,
    float m30, float m31, float m32, float m33
)
    : data_{
        m00, m10, m20, m30,
        m01, m11, m21, m31,
        m02, m12, m22, m32,
        m03, m13, m23, m33
    }
{
}

Mat4x4 Mat4x4::operator+(const Mat4x4& other) const
{
    Mat4x4 result = *this;

    for (int i = 0; i < 16; ++i)
        result.data_[i] += other.data_[i];

    return result;
}

float Mat4x4::get(int row, int column) const
{
    return data_[column * 4 + row];
}