cmake_minimum_required(VERSION 3.10)

project(MathCore VERSION 1.0 LANGUAGES CXX)

add_library(MathCore STATIC
    MathCore/Vec/Vec2/Vec2.cpp
    MathCore/Vec/Vec3/Vec3.cpp
    MathCore/Vec/Vec4/Vec4.cpp
    MathCore/Mat/Mat4x4.cpp
)

target_include_directories(MathCore
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_features(MathCore PUBLIC cxx_std_20)

add_executable(VectorSum
    "Examples/1.- Vector Operations/Main.cpp"
)
  
target_link_libraries(VectorSum
    PRIVATE MathCore
)