#include <stdio.h>
#include <stdlib.h>
int a[105], hash[105];
int cmp(const void *e1, const void *e2)
{
    int *i = (int *)e1, *j = (int *)e2;
    if (*i > *j)
    {
        return 1;
    }
    if (*i < *j)
    {
        return -1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                if (a[j] + a[k] == a[i])
                {
                    if (hash[i] == 0)
                    {
                        cnt++;
                    }
                    hash[i] = 1;
                    break;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}