#include <stdio.h>
#include <stdlib.h>
int a[105];
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
        int l = 0, r = i - 1;
        while (l < r)
        {
            if (a[l] + a[r] < a[i])
            {
                l++;
            }
            else if (a[l] + a[r] > a[i])
            {
                r--;
            }
            else
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}