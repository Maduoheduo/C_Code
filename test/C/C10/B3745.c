#include <stdio.h>
int f1[105], f2[105], p1[105], p2[105], a[105];
int main()
{
    int n, m, r;
    scanf("%d%d%d", &n, &m, &r);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cnt = n;
    for (int i = 0; i < n; i++)
    {
        int f = f1[a[i] - 1], p = p1[a[i] - 1];
        int minp = r, index = -1;
        for (int j = 0; j < n; j++)
        {
            if (f2[j] == f && p2[j] > p)
            {
                if (p2[j] <= minp)
                {
                    minp = p2[j];
                    index = j;
                }
            }
        }
        if (index != -1)
        {
            cnt--;
            p2[index] = -1;
        }
    }
    printf("%d", cnt);
    return 0;
}