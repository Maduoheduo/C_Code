#include <stdio.h>
#include <stdlib.h>
int a[2000005];
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (i > j)
        return 1;
    if (i < j)
        return -1;
    return 0;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, m, sizeof(int), cmp);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}