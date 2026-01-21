#include <stdio.h>
#include <stdlib.h>

int cmp(const void *e1, const void *e2)
{
    if (*((int *)e1) < *((int *)e2))
        return -1;
    else if (*((int *)e1) > *((int *)e2))
        return 1;
    else
        return 0;
}
int data[1000000][2];
int main()
{
    int n, i, t, *ret;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", data[i]); // 等价于 scanf("%d", &data[i][0]);
        data[i][1] = i + 1;   // 保存序号
    }
    qsort(data, n, 2 * sizeof(int), cmp); // n 个单元，每个单元存放数据和序号,根据数据大小排序，以便Bsearch查找
    while (scanf("%d", &t) != EOF)
    {
        ret = (int *)bsearch(&t, data, n, 2 * sizeof(int), cmp);
        if (ret)
            printf("%d\n", ret[1]);
        else
            printf("NO\n");
    }
    return 0;
}