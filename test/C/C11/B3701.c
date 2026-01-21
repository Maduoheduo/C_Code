#include <stdio.h>
int a[1000005];
int main()
{
    int n, m, l;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &l);
        l--;
        for (int i = 0; i <= 2 && l + i < n; i++)
        {
            a[l + i] = 1;
        }
        for (int i = 0; i >= -2 && l + i >= 0; i--)
        {
            a[l + i] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}