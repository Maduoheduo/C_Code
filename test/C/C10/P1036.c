#include <stdio.h>
int s[25];
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
int find(int n, int m, int k, int index, int sum, int c)
{
    if (m == k - 1)
    {
        int cnt = 0;
        for (int i = index + 1; i < n; i++)
        {
            sum += s[index];
            if (isprime(sum))
            {
                cnt++;
            }
        }
        return cnt;
    }
    for (int i = index + 1; i < n; i++)
    {
        sum += s[index];
        c += find(n, m + 1, k, i, sum, c);
    }
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    return 0;
}