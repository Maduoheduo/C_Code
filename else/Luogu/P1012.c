#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[25][11];
int key[25];
char s2[25];
char s1[25];
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    strcpy(s1, a[i]);
    strcat(s1, a[j]);
    strcpy(s2, a[j]);
    strcat(s2, a[i]);
    if (strcmp(s1, s2) > 0)
        return -1;
    if (strcmp(s1, s2) < 0)
        return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
        getchar();
        key[i] = i;
    }
    qsort(key, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s", a[key[i]]);
    }
    return 0;
}