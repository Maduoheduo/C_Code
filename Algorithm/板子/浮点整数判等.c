#include <math.h>
// 判断浮点数的值是否等于整数
int equal(double e)
{
    if (fabs(round(e) - e) < 1e-6)
    {
        return 1;
    }
    return 0;
}

// 判断两浮点数相等
#define eps 1e-6
int equal(double a, double b)
{
    if (fabs(a - b) < eps)
    {
        return 1;
    }
    return 0;
}