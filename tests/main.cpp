#include <gtest/gtest.h>
#include "Math/sum_integers_test.h"
#include "Math/triangle_test.h"
#include "Math/counter_test.h"
#include "Math/num_test.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}