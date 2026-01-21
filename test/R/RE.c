#include <stdio.h>

int main()
{
    int a, b, c, m;
    scanf("%d%d%d%d", &a, &b, &c, &m);
    int x = 0, x2 = 0, y = 0, y2 = 0, z = 0, z2 = 0;
    while (m--)
    {
        int op, k;
        long long V = 0;
        scanf("%d%d", &op, &k);
        switch (op)
        {
        case 1:
            x2 = k;
            if (x2 > x)
            {
                V = (long long)(x2 - x) * (long long)(b - y) * (long long)(c - z);
                x = x2;
            }
            break;
        case 2:
            y2 = k;
            if (y2 > y)
            {
                V = (long long)(a - x) * (long long)(y2 - y) * (long long)(c - z);
                y = y2;
            }
            break;
        case 3:
            z2 = k;
            if (z2 > z)
            {
                V = (long long)(a - x) * (long long)(b - y) * (long long)(z2 - z);
                z = z2;
            }
            break;
        }
        printf("%lld\n", V);
    }
    return 0;
}