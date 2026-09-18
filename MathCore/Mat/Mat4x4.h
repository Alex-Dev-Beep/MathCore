#pragma once

class Mat4x4
{
public:
    Mat4x4(
        float m00, float m01, float m02, float m03,
        float m10, float m11, float m12, float m13,
        float m20, float m21, float m22, float m23,
        float m30, float m31, float m32, float m33
    );

    Mat4x4 operator+(const Mat4x4& other) const;
    float get(int row, int column) const;

private:
    float data_[16];
};