#include <stdio.h>
#include <math.h>
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
int judge(int n)
{
    int y = n % 10000;
    int m = n / 100 % 100;
    int d = n % 100;
    if (m > 0 && m <= 12 && d > 0 && d <= Dayspermonth(m, y))
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
        for (int i = 3000; i <= 10000; i++)
        {
            int n = i * i;
            if (judge(n) == 1 && n >= a && n <= b)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}