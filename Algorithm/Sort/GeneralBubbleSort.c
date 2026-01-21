#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap_elem(void *a, void *b, int size)
{
    int i;
    char temp;
    for (i = 0; i < size; i++)
    {
        temp = *((char *)(a) + i); // 注意强制类型转换
        *((char *)(a) + i) = *((char *)(b) + i);
        *((char *)(b) + i) = temp;
    }
}
void g_bub_sort(void *array, int len, int elemSize, int (*cmp)(const void *, const void *))
{
    int i, j;
    for (i = 1; i < len; i++) // bubble sorting
        for (j = 0; j < len - i; j++)
            if (cmp(array + (j + 1) * elemSize, array + j * elemSize))
                swap_elem(array + (j + 1) * elemSize, array + j * elemSize, elemSize);
}
int greater(const void *e1, const void *e2) // 降序
{
    char *x1 = (char *)e1, *x2 = (char *)e2; // 记得自己改
    return *x1 > *x2;
}
int less(const void *e1, const void *e2) // 升序
{
    int *x1 = (int *)e1, *x2 = (int *)e2; // 记得自己改
    return *x1 < *x2;
}
int main()
{
    char a[] = "aadsfefvcxzb";
    int b[] = {9, 5, 6, 7, 2, 0};
    g_bub_sort(a, strlen(a), sizeof(char), greater);
    printf("%s\n", a);
    g_bub_sort(b, sizeof(b), sizeof(b) / sizeof(b[0]), less);
    for (int i = 0; i < 6; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}