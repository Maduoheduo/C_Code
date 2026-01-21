// 要用高精度
#include <stdio.h>
unsigned long long dp[1005];
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    dp[m] = 1;
    dp[m + 1] = 1;
    for (int i = m + 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    printf("%llu", dp[n]);
    return 0;
}