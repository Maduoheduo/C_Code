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
        // 10^18,二进制最多60位
        for (int i = 59; i >= 0; i--)
        {

            if (((l >> i) & 1ll) == 1)
            {
                long long ans = (1ll << (i + 1)) - 1; // 这样处理不了l=r的情况！！！！！！！！！！！！！！
                printf("%lld\n", ans);
                break;
            }
        }
    }
    return 0;
}
