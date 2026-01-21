#include <stdio.h>
unsigned long long m[5005];
unsigned long long f(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (m[n] != 0)
    {
        return m[n];
    }
    m[n] = f(n - 1) + f(n - 2);
    return f(n - 1) + f(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu", f(n));
    return 0;
}