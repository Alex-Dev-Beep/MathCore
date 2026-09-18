#include <MathCore/MathCore.h>

int main()
{
    Vec2 a(1, 2);
    Vec2 b(3, 4);

    auto resultVec2 = a + b;

    std::cout << "Result of Vec2 addition: (" << resultVec2.x() << ", " << resultVec2.y() << ")" << std::endl;

    Vec3 c(1, 2, 3);
    Vec3 d(4, 5, 6);

    auto resultVec3 = c + d;

    std::cout << "Result of Vec3 addition: (" << resultVec3.x() << ", " << resultVec3.y() << ", " << resultVec3.z() << ")" << std::endl;

    Vec4 e(1, 2, 3, 4);
    Vec4 f(5, 6, 7, 8);

    auto resultVec4 = e + f;

    std::cout << "Result of Vec4 addition: (" << resultVec4.x() << ", " << resultVec4.y() << ", " << resultVec4.z() << ", " << resultVec4.w() << ")" << std::endl;

    return 0;
}