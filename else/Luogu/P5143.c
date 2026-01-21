#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int locate[50005][3], num[50005];
double dis(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2)));
}
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (locate[i][2] > locate[j][2])
        return 1;
    if (locate[i][2] < locate[j][2])
        return -1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &locate[i][0], &locate[i][1], &locate[i][2]);
        num[i] = i;
    }
    double ans = 0;
    qsort(num, n, sizeof(int), cmp);
    for (int i = 0; i < n - 1; i++)
    {
        ans += dis(locate[num[i]][0], locate[num[i]][1], locate[num[i]][2], locate[num[i + 1]][0], locate[num[i + 1]][1], locate[num[i + 1]][2]);
    }
    printf("%.3lf", ans);
    return 0;
}