#include <stdio.h>
#include <math.h>
#define eps 1e-6
int Dayspermonth(int m, int y)
{
    if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m == 2)
    {
        return 29;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        return 31;
    }
    else if (m == 2)
    {
        return 28;
    }
    else
    {
        return 30;
    }
}
int ispow(int n)
{
    int i = (int)sqrt(n);
    if (fabs(i - sqrt(n)) < eps)
    {
        return 1;
    }
    return 0;
}
int judge(int n)
{
    int y = n % 10000;
    int m = n / 100 % 100;
    int d = n % 100;
    if (m <= 12 && Dayspermonth(m, y) >= d && d > 0 && m > 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (judge(i) == 1 && ispow(i) == 1)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}