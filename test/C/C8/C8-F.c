#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long l, r;
        scanf("%lld%lld", &l, &r);
        l ^= r;
        long long ans = 0;
        // 10^18,二进制最多60位
        for (int i = 59; i >= 0; i--)
        {

            if (((l >> i) & 1ll) == 1)
            {
                ans = (1ll << (i + 1)) - 1;
                break;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
