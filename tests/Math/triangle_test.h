#include "triangle.h"
/*
    Suite: Pytago
    Test: is right triangle
*/
TEST(Triangle, is_right)
{
    int AB = 4;
    int AC = 3;
    int BC = 5;
    // Expect True if Triangle ABC is Right
    EXPECT_TRUE(BC == py_ta_go(AB, AC));
}
/*
    Suite: Pytago
    Test: is not right triangle
*/
TEST(Triangle, is_not_right)
{
    int AB = 4;
    int AC = 6;
    int BC = 8;
    // Expect True if Triangle ABC is not Right
    EXPECT_TRUE(BC == py_ta_go(AB, AC));
}
/*
    Suite: Triangle
    Test: is Triangle
*/
TEST(Triangle, is_triangle)
{
    int AB = 5;
    int AC = 3;
    int BC = 7;
    // Expect Equal True if AB, AC, BC is Edges of Triangle ABC
    EXPECT_EQ(1, is_triangle(AB, AC, BC));
}
/*
    Suite: Triangle
    Test: is not Triangle
*/
TEST(Triangle, is_not_triangle)
{
    int AB = 5;
    int AC = 3;
    int BC = 2;
    // Expect Equal True if AB, AC, BC is not Edges of Triangle ABC
    EXPECT_EQ(1, is_triangle(AB, AC, BC));
}
