#include <stdio.h>
int min(int i, int j)
{
    if (i < j)
    {
        return i;
    }
    return j;
}
int main()
{
    unsigned long long n, m;
    scanf("%llu%llu", &n, &m);
    unsigned long long s1 = 0, s2 = 0, s = 0;
    for (int y1 = 1; y1 <= n; y1++)
    {
        for (int x1 = 1; x1 <= m; x1++)
        {
            s1 += min(x1, y1);
        }
    }
    s = (1 + n) * n * (1 + m) * m / 4;
    s2 = s - s1;
    printf("%llu %llu", s1, s2);
    return 0;
}