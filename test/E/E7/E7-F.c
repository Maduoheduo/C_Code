#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *s[1005];
char s1[10005];
char s2[10005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int op;
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            scanf("%s", s1);
            int flag = 1;
            for (int j = 0; j < i; j++)
            {
                if (s[j] != NULL)
                {
                    if (strcmp(s[j], s1) == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                printf("Delicious!\n");
                s[i] = (char *)malloc(strlen(s1) + 1);
                strcpy(s[i], s1);
            }
            else
            {
                printf("Not Applicable\n");
            }
            break;
        case 2:
            scanf("%s", s1);
            for (int j = 0; j < i; j++)
            {
                if (s[j] != NULL && strcmp(s1, s[j]) == 0)
                {
                    char *p = s[j];
                    *p = '\0';
                    free(s[j]);
                    s[j] = NULL;
                    break;
                }
            }
            break;
        case 3:
            scanf("%s%s", s1, s2);
            for (int j = 0; j < i; j++)
            {
                if (s[j] != NULL && strcmp(s1, s[j]) == 0)
                {
                    strcat(s[j], s2);
                }
            }
        }
    }

    return 0;
}