#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long s1, s2, s3, s4, s5, s6;
    s1 = a * (1 << b);
    s2 = a / (1 << b);
    s3 = a >> b & 1ll;
    s4 = a & (~(1 << b));
    s5 = a | (1 << b);
    if (s3 == 0)
    {
        s6 = s5;
    }
    else
    {
        s6 = s4;
    }
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%lld", s1, s2, s3, s4, s5, s6);
    return 0;
}