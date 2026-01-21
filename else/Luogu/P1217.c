#include <stdio.h>
#define MAXN 100000005
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
    int base = 0;
    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        base++;
    }
    int basenum[base];
    temp = n;
    for (int i = 0; i < base; i++)
    {
        basenum[i] = temp % 10;
        temp /= 10;
    }
    int m = 0;
    for (int i = 0; i < base; i++)
    {
        m *= 10;
        m += basenum[i];
    }
    if (m == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    euler_sieve(b);
    for (int i = 0; i < primes_cnt; i++)
    {
        if (judge(primes[i]) && primes[i] >= a)
        {
            printf("%d\n", primes[i]);
        }
    }
    return 0;
}