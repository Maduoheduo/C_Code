#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define eps 1e-6
int equal(double a, double b)
{
    if (fabs(a - b) < eps)
    {
        return 1;
    }
    return 0;
}
double k1[300000], k2[300000];
int a[300005][2];
int key[300005];
int cmp1(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (equal(k1[i], k1[j]))
    {
        if (a[i][0] < a[j][0])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (k1[i] < k1[j])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i][0], &a[i][1]);
        key[i] = i;
        if (a[i][1] >= 0)
        {
            if (a[i][0] == 0)
            {
                k1[i] = 1e8;
            }
            else
            {
                k1[i] = (double)a[i][1] / (double)a[i][0];
            }
        }
        else
        {
            if (a[i][0] == 0)
            {
                k2[i] = 1e8;
            }
            else
            {
                k2[i] = (double)a[i][1] / (double)a[i][0];
            }
        }
    }
    qsort(key) return 0;
}