#include "../src/sum_integers.h"
TEST(SumIntegers, Short)
{
    auto integers = {1, 2, 3, 4, 5};
    ASSERT_EQ(sum_integers(integers), 15);
}

TEST(SumIntegers, Long)
{
    std::vector<int> integers;
    for (int i = 1; i < 1001; ++i)
    {
        integers.push_back(i);
    }
    ASSERT_EQ(sum_integers(integers), 500500);
}