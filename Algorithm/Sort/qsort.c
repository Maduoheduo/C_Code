#include <stdio.h>
#include <stdlib.h>
int a[200010], n;
int cmp(const void *p1, const void *p2)
{
    int *a = (int *)p1, *b = (int *)p2;
    if (*a < *b)
        return -1; // a要排在b前面时，返回负数值
    else if (*a > *b)
        return 1; // a要排在b后面时，返回正数值
    else
        return 0; // 不需要变动时，返回0
}
int main()
{
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    qsort(a + 1, n, sizeof(a[0]), cmp);
    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}