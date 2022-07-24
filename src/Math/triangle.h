#include <math.h>
double py_ta_go(double a, double b)
{
    // Py-Ta-Go formula
    double c = std::sqrt(a * a + b * b);
    return c;
}

bool is_triangle(double a, double b, double c)
{
    // check condition
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    else
        return 1;
}