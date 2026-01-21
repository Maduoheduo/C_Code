#include <stdio.h>
int a[1005];
int dp[10005];
int min(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    return b;
}
int main()
{ // 排序？
    dp[0] = 0;
    int n, w;
    scanf("%d%d", &n, &w);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= w; i++)
    {
        dp[i] = 1e8;
        for (int j = 1; j <= n; j++) //
        {
            if (i - a[j] >= 0 && dp[i - a[j]] + 1 < dp[i])
            {
                dp[i] = dp[i - a[j]] + 1;
            }
        }
    }
    printf("%d", dp[w]);
    return 0;
}