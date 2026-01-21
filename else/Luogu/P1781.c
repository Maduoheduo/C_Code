#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[25][105];
int num[25];
int cmp(const void *e1, const void *e2)
{
    int i = *(char *)e1, j = *(char *)e2;
    if (strlen(s[i]) > strlen(s[j]))
    {
        return -1;
    }
    else if (strlen(s[i]) < strlen(s[j]))
    {
        return 1;
    }
    else
    {
        if (strcmp(s[i], s[j]) > 0)
        {
            return -1;
        }
        else if (strcmp(s[i], s[j]) < 0)
        {
            return 1;
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
        scanf("%s", s[i]);
        num[i] = i;
    }
    qsort(num, n, sizeof(int), cmp);
    printf("%d\n%s", num[0] + 1, s[num[0]]);
    return 0;
}