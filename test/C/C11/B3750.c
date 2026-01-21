#include <stdio.h>
#define MAXN 10000
int is_prime[MAXN + 1];
int primes[MAXN + 1], primes_cnt;
void euler_sieve(int n)
{
    for (int i = 0; i <= n; ++i)
        is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;
    primes_cnt = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (is_prime[i])
            primes[primes_cnt++] = i;
        for (int j = 0; j < primes_cnt && i * primes[j] <= n; ++j)
        {
            is_prime[i * primes[j]] = 0;
            if (i % primes[j] == 0)
                break;
        }
    }
}
int judge(int n)
{
    while (n > 0)
    {
        if (is_prime[n] == 0)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    euler_sieve(n);
    for (int i = m; i <= n; i++)
    {
        if (judge(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}