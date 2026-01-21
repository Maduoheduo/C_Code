#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p, const void *q)
{
    if (*(long long *)p > *(long long *)q)
        return 1;
    else if (*(long long *)p < *(long long *)q)
        return -1;
    else
        return 0;
}
long long a[1000005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        if ((a[i] != a[i - 1]) || i == 0)
        {
            printf("%lld ", a[i]);
        }
    }
    return 0;
}