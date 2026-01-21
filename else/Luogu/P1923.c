#include <stdio.h>
#include <stdlib.h>
long long a[5000000];
int cmp(const void *e1, const void *e2)
{
    long long i = *(long long *)e1, j = *(long long *)e2;
    if (i > j)
        return 1;
    if (i < j)
        return -1;
    return 0;
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    qsort(a, n, sizeof(long long), cmp);
    int cnt = 0, i = 0;
    while (cnt < k)
    {
        i++;
        if (a[i] > a[i - 1])
        {
            cnt++;
        }
    }
    printf("%lld", a[k]);
    return 0;
}