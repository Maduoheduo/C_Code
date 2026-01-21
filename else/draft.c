#include <stdio.h>
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
    printf("%d", judge(123202321));
}