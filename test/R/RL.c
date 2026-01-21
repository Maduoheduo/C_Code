#include <stdio.h>
#include <math.h>
double f(double A, double B, double C, double D, double x)
{
    return A * exp(x) + B * pow(x, 3) + C * x + D;
}

double derf(double A, double B, double C, double x)
{
    return A * exp(x) + 3 * B * pow(x, 2) + C;
}

double Newton(double A, double B, double C, double D, double x0, double eps)
{
    double x1 = x0 - f(A, B, C, D, x0) / derf(A, B, C, x0);
    while (fabs(x1 - x0) >= eps)
    {
        x0 = x1;
        x1 = x0 - f(A, B, C, D, x0) / derf(A, B, C, x0);
    }
    return x1;
}
int main()
{
    double a, b, c, d, eps = 1e-8;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double solution = Newton(a, b, c, d, 0, eps);
    printf("%.6lf", solution);
    return 0;
}