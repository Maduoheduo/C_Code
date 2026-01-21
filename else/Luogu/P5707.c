#include <stdio.h>
int main()
{
    int s, v;
    scanf("%d%d", &s, &v);
    int sum = s / v + 10;
    if (s % v != 0)
    {
        sum++;
    }
    int t0 = 480;
    int t = t0 - sum;
    if (t < 0)
    {
        t += 24 * 60;
    }
    int h = t / 60;
    int m = t % 60;
    if (h / 10 == 0)
    {
        printf("0");
    }
    printf("%d:", h);
    if (m / 10 == 0)
    {
        printf("0");
    }
    printf("%d", m);
    return 0;
}