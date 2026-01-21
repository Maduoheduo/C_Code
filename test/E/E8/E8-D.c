#include <stdio.h>
int l(int n, int k)
{
    if (((n >> k) & 1) == 1 && n != 1 && n != 2 && n != 4 && n != 8 && n != 16 && n != 32)
    {
        return 1;
    }
    return 0;
}
long long check(long long a, int k)
{
    int cnt = 0;
    for (int i = 0; i <= 63; i++)
    {
        if ((l(i, k) == 1))
        {
            if (((a >> i) & 1) == 1)
                cnt++;
        }
    }
    if (cnt % 2 == 1)
    {
        return (1ll << (1ll << k));
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        unsigned long long a, code = 0;
        scanf("%llu", &a);
        long long a1 = a & 1, a2 = (a & ((0B111) << 1)) >> 1, a3 = (a & ((0B1111111) << 4)) >> 4, a4 = (a & ((0B111111111111111) << 11)) >> 11, a5 = (a >> 26);
        code += ((a1 << 3) + (a2 << 5) + (a3 << 9) + (a4 << 17) + (a5 << 33));
        code += (check(code, 5) + check(code, 4) + check(code, 3) + check(code, 2) + check(code, 1) + check(code, 0));
        int cnt = 0;
        for (int i = 1; i <= 63; i++)
        {
            if (((code >> i) & 1) == 1)
                cnt++;
        }
        if (cnt % 2 == 1)
        {
            code += 1;
        }
        printf("%llu\n", code);
    }
    return 0;
}
