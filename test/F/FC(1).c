#include <stdio.h>
#include <math.h>
#define eps 1e-6
int equal(double a, double b)
{
    if (fabs(a - b) < eps)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double a, b;
        scanf("%lf%lf", &a, &b);
        if (equal(a, b))
        {
            printf("%.3lf\n", sqrt(pow(a, 2) + pow(b, 2)));
        }
        else
        {
            printf("%.3lf %.3lf\n", sqrt(fabs(pow(a, 2) - pow(b, 2))), sqrt(pow(a, 2) + pow(b, 2)));
        }
    }
    return 0;
}