#include <stdio.h>
int a[205], b[205];
int judge(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (a == 0)
    {
        if (b == 1 || b == 4)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    if (a == 1)
    {
        if (b == 2 || b == 4)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    if (a == 2)
    {
        if (b == 3 || b == 0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    if (a == 3)
    {
        if (b == 1 || b == 0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    if (a == 4)
    {
        if (b == 2 || b == 3)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return 114514;
}
int main()
{
    int n, na, nb, sa = 0, sb = 0;
    scanf("%d%d%d", &n, &na, &nb);
    for (int i = 0; i < na; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < nb; i++)
    {
        scanf("%d", &b[i]);
    }
    int indexa = 0, indexb = 0;
    for (int i = 0; i < n; i++)
    {
        if (judge(a[indexa], b[indexb]) == 1)
        {
            sa++;
        }
        else if (judge(a[indexa], b[indexb]) == -1)
        {
            sb++;
        }
        indexa = (indexa + 1) % na;
        indexb = (indexb + 1) % nb;
    }
    printf("%d %d", sa, sb);
    return 0;
}