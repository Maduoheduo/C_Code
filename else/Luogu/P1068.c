#include <stdio.h>
#include <stdlib.h>
int num[5005], s[5005][2];
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (s[i][1] > s[j][1])
    {
        return -1;
    }
    if (s[i][1] < s[j][1])
    {
        return 1;
    }
    if (s[i][0] > s[j][0])
    {
        return 1;
    }
    else
    {
        return -1;
    }
    return 0;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    m = (int)(m * 1.5);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &s[i][0], &s[i][1]);
        num[i] = i;
    }
    qsort(num, n, sizeof(int), cmp);
    int score = s[num[m - 1]][1], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[num[i]][1] < score)
        {
            break;
        }
        cnt++;
    }
    printf("%d %d\n", score, cnt);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d %d\n", s[num[i]][0], s[num[i]][1]);
    }
    return 0;
}