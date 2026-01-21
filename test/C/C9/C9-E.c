#include <stdio.h>
#include <stdlib.h>
int s[500005], b[500005], idx[500005];
int cmp(const void *p1, const void *p2)
{
    int i = *(int *)p1, j = *(int *)p2;
    if (b[i] > b[j])
    {
        return -1; // a要排在b前面时，返回负数值
    }
    else if (b[i] < b[j])
    {
        return 1; // a要排在b后面时，返回正数值
    }
    else
    {
        if (s[i] > s[j])
        {
            return -1;
        }
        else if (s[i] < s[j])
        {
            return 1;
        }
    }
    return 0;
}
int bw(int n)
{
    int ret = 0;
    for (int i = 0; i < 32; i++)
    {
        int w = (n >> i) & 1;
        ret += (i + 1) * w;
    }
    return ret;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
        b[i] = bw(s[i]);
        idx[i] = i;
    }
    qsort(idx, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", s[idx[i]]);
    }
    return 0;
}