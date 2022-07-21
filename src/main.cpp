#include <iostream>
#include "sum_integers.h"
int main(int, char **)
{
    auto integers = {1, 2, 3, 4, 5};
    std::cin.get();

    if (sum_integers(integers) == 15)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
