#include <stdio.h>
int memory[1005];
long long expand(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (memory[n] != 0)
    {
        return memory[n];
    }
    long long sum = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        sum += expand(i);
    }
    memory[n] = sum;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", expand(n));
    return 0;
}