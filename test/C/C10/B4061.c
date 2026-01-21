#include <stdio.h>
#define ull unsigned long long
int main()
{
    ull a, b;
    scanf("%llu %llu", &a, &b);
    ull s1, s2, s3, s4, s5, s6;
    s1 = a * (1ull << b);
    s2 = a / (1ull << b);
    s3 = (a >> b) & 1;
    s4 = a & (~(1ull << b));
    s5 = a | (1ull << b);
    if (s3 == 1)
    {
        s6 = s4;
    }
    else
    {
        s6 = s5;
    }
    printf("%llu\n%llu\n%llu\n%llu\n%llu\n%llu\n", s1, s2, s3, s4, s5, s6);
    return 0;
}