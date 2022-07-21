#ifndef __SUM_INTEGERS_H__
#define __SUM_INTEGERS_H__

#include <vector>

int sum_integers(const std::vector<int> integers)
{
    auto sum = 0;
    for (auto i : integers)
    {
        sum += i;
    }
    return sum;
}
#endif // __SUM_INTEGERS_H__