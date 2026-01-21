#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[1005][10];
int key[1005];
int cmp(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (strlen(s[i]) > strlen(s[j]))
    {
        return 1;
    }
    else if (strlen(s[i]) < strlen(s[j]))
    {
        return -1;
    }
    else
    {
        if (strcmp(s[i], s[j]) > 0)
        {
            return 1;
        }
        else if (strcmp(s[i], s[j]) < 0)
        {
            return -1;
        }
    }
    return 0;
}
int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        key[i] = i;
    }
    qsort(key, n, sizeof(int), cmp);
    for (int i = 0; i < q; i++)
    {
        int len;
        char s1[10];
        scanf("%d %s", &len, s1);
        int n1 = strlen(s1);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if ((int)strlen(s[key[i]]) < n1)
            {
                continue;
            }
            char *p = strchr(s[key[i]], '\0');
            char s2[10];
            memset(s2, 0, sizeof(char));
            strcpy(s2, p - n1);
            if (strcmp(s1, s2) == 0)
            {
                printf("%s\n", s[key[i]]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("-1\n");
        }
    }
    return 0;
}