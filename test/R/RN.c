#include <stdio.h>
#define ull unsigned long long
int main()
{
    ull a, b;
    while (scanf("%llu%llu", &a, &b) != EOF)
    {
        for (int i = 0; i < 64; i++)
        {
            if (((b >> i) & 1llu) == 1)
            {
                if (((a >> i) & 1llu) == 1)
                {
                    a &= ~(1llu << i);
                }
                else
                {
                    a |= (1llu << i);
                }
            }
        }
        printf("%llu\n", a);
    }
    return 0;
}