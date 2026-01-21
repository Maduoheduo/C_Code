#include <stdio.h>
int a[25];
#define MAXN 1000000
int isprime[MAXN + 1];
int primes[MAXN + 1], primes_cnt;
void euler_sieve(int n)
{
    for (int i = 0; i <= n; ++i)
        isprime[i] = 1;
    isprime[0] = isprime[1] = 0;
    primes_cnt = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (isprime[i])
            primes[primes_cnt++] = i;
        for (int j = 0; j < primes_cnt && i * primes[j] <= n; ++j)
        {
            isprime[i * primes[j]] = 0;
            if (i % primes[j] == 0)
                break;
        }
    }
}
int k, n, ans = 0;
void dfs(int now, int sum, int sid)
{
    if (now == k)
    {
        if (isprime[sum])
        {
            ans++;
        }
        return;
    }
    for (int i = sid; i < n - k + now + 1; i++)
    { // k个数已选now+1个数
        dfs(now + 1, sum + a[i], i + 1);
    }
    return;
}
int main()
{
    euler_sieve(MAXN);
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    dfs(0, 0, 0);
    printf("%d", ans);
    return 0;
}