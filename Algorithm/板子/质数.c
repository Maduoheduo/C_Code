// 试除法
int isprime(int n)
{
    int prime = 1;
    if (n == 2)
    {
        return 1;
    }
    if (n == 1 || n == 0)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
// 埃氏筛
void sieve(int n, int isPrime[])
{
    for (int i = 2; i <= n; i++)
        isPrime[i] = 1;
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

// 欧 拉 筛： 线 性 时 间 复 杂 度 O(n)
#define MAXN 1000000
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