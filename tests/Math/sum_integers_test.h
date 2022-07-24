#include "sum_integers.h"

/*
    Suite: Sum Integers
    Test: short
*/
TEST(SumIntegers, Short)
{
    // vector 5 elements
    auto integers = {1, 2, 3, 4, 5};
    // verify two numbers are equal
    ASSERT_EQ(sum_integers(integers), 15);
}
/*
    Suite: Sum Integers
    Test: Long ( 1 -> 1000)
*/
TEST(SumIntegers, Long)
{
    // declare vector
    std::vector<int> integers;
    // push 1000 elements to vector
    for (int i = 1; i < 1001; ++i)
    {
        integers.push_back(i);
    }
    // verify two numbers are equal
    ASSERT_EQ(sum_integers(integers), 500500);
}