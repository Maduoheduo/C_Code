#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[10005][1005];
int lines[10005];                       // 记录序号
int cmp(const void *e1, const void *e2) // 注意是指针
{
    int i = *((int *)e1), j = *((int *)e2);
    if (strcmp(s[i], s[j]) > 0)
        return 1;
    if (strcmp(s[i], s[j]) < 0) // 升序，i排在j前面，返回-1
        return -1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        lines[i] = i;
    }
    qsort(lines, n, sizeof(int), cmp); // 注意是对序号数列排序
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[lines[i]]);
    }
    return 0;
}