#include <stdio.h>
#include <stdlib.h>
int chinese[305], math[305], english[305], sum[305], num[305];
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (sum[i] > sum[j])
    {
        return -1;
    }
    if (sum[i] < sum[j])
    {
        return 1;
    }
    if (sum[i] == sum[j])
    {
        if (chinese[i] > chinese[j])
        {
            return -1;
        }
        if (chinese[i] < chinese[j])
        {
            return 1;
        }
        if (chinese[i] == chinese[j])
        {
            if (i > j)
            {
                return 1;
            }
            if (i < j)
            {
                return -1;
            }
            return 0;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &chinese[i], &math[i], &english[i]);
        sum[i] = chinese[i] + math[i] + english[i];
        num[i] = i;
    }
    qsort(num, n, sizeof(int), cmp);
    for (int i = 0; i < 5; i++)
    {
        int j = num[i];
        printf("%d %d\n", j + 1, sum[j]);
    }
    return 0;
}