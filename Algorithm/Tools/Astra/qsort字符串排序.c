#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char arr[100][1005];
int lines[100];
int cmp(const void *e1, const void *e2)
{
    int i = *((int *)e1), j = *((int *)e2);
    int ilen = strlen(arr[i]), jlen = strlen(arr[j]);
    if (ilen > jlen || ilen == jlen && strcmp(arr[i], arr[j]) > 0)
    {
        return 1;
    }
    if (ilen < jlen || ilen == jlen && strcmp(arr[i], arr[j]) < 0)
    {
        return -1;
    }
    return 0;
}
int main()
{
    int i, k = 0;
    while (gets(arr[k]) != NULL)
    {
        lines[k] = k; // 记录序号
        k++;
    }
    qsort(lines, k, sizeof(int), cmp);
    for (int i = 0; i < k; i++)
    {
        printf("%s\n", arr[lines[i]]);
    }
    return 0;
}