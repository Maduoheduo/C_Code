#include <stdio.h>
#include <stdlib.h>
int h[20005], num[20005];
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (h[i] > h[j])
        return -1;
    if (h[i] < h[j])
        return 1;
    if (h[i] == h[j])
    {
        if (i > j)
            return -1;
        if (i < j)
            return 1;
    }
    return 0;
}

int main()
{
    int n, b;
    scanf("%d%d", &n, &b);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
        num[i] = i;
    }
    qsort(num, n, sizeof(int), cmp);
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += h[num[i]];
        cnt++;
        if (sum >= b)
        {
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}