#include <stdio.h>
int prime[1000005];
int isprime(int n)
{
    if (prime[n] == 1)
    {
        return 1;
    }
    if (prime[n] == -1)
    {
        return 0;
    }
    if (n == 2)
    {
        prime[2] = 1;
        return 1;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime[n] = -1;
            return 0;
        }
    }
    prime[n] = 1;
    return 1;
}
void dec(int x)
{
    if (isprime(x))
    {
        printf("%d", x);
    }
    else
    {
        int a;
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                a = i;
            }
        }
        dec(a);
        printf("*");
        dec(x / a);
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int x;
        scanf("%d", &x);
        dec(x);
        printf("\n");
    }
    return 0;
}