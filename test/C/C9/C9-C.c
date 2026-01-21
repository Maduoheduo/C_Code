#include <stdio.h>
#include <math.h>
double x[1005], y[1005];
int main()
{
    int n;
    scanf("%d", &n);
    double sumx = 0, sumy = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &x[i]);
        sumx += x[i];
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &y[i]);
        sumy += y[i];
    }
    double a = 0, b = 0, c = 0;
    sumx /= (double)n;
    sumy /= (double)n;
    for (int i = 0; i < n; i++)
    {
        a += (x[i] - sumx) * (y[i] - sumy);
        b += pow(x[i] - sumx, 2);
        c += pow(y[i] - sumy, 2);
    }
    double p = a / sqrt(b * c);
    printf("%.2lf", p);
    return 0;
}