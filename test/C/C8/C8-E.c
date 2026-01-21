#include <stdio.h>
#include <math.h>
#define pi 3.141592654
int x[200005], y[200005];
double dis(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        double sum = 0;
        int n;
        double r;
        scanf("%d%lf", &n, &r);
        double C = 2.0 * pi * r;
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &x[i], &y[i]);
        }
        for (int i = 1; i < n; i++)
        {
            sum += dis(x[i], y[i], x[i - 1], y[i - 1]);
        }
        sum += dis(x[0], y[0], x[n - 1], y[n - 1]);
        sum += C;
        printf("%lf\n", sum);
    }
    return 0;
}