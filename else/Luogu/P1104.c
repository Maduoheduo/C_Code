#include <stdio.h>
#include <stdlib.h>
char s1[105][20];
int s2[105][3], key[105];
int datecmp(int i, int j)
{
    if (s2[i][0] < s2[j][0])
    {
        return -1;
    }
    else if (s2[i][0] > s2[j][0])
    {
        return 1;
    }
    else
    {
        if (s2[i][1] < s2[j][1])
        {
            return -1;
        }
        else if (s2[i][1] > s2[j][1])
        {
            return 1;
        }
        else
        {
            if (s2[i][2] < s2[j][2])
            {
                return -1;
            }
            else if (s2[i][2] > s2[j][2])
            {
                return 1;
            }
            else
            {
                if (i < j)
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
}
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    return (datecmp(i, j));
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d%d", s1[i], &s2[i][0], &s2[i][1], &s2[i][2]);
        key[i] = i;
    }
    qsort(key, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s1[key[i]]);
    }
    return 0;
}