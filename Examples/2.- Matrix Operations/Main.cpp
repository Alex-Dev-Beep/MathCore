#include <iostream>
#include <MathCore/MathCore.h>

int main()
{
    Mat4x4 a(
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12,
        13, 14, 15, 16
    );

    Mat4x4 b(
        1, 1, 1, 1,
        1, 1, 1, 1,
        1, 1, 1, 1,
        1, 1, 1, 1
    );

    Mat4x4 c = a + b;

    for (int row = 0; row < 4; ++row)
    {
        for (int column = 0; column < 4; ++column)
        {
            std::cout << c.get(row, column) << '\t';
        }

        std::cout << '\n';
    }

    return 0;
}