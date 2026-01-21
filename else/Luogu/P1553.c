#include <stdio.h>
#include <string.h>
char s[25];
char s1[25], s2[25];
void rev(char s[], int op)
{
    int len1 = strlen(s) - 1;
    if (len1 == 0)
    {
        return;
    }
    if (op != 1 && len1 != 1)
    {
        for (int i = len1; i >= 0; i--)
        {
            if (s[i] == '0' && s[i + 1] == '\0')
            {
                s[i] = '\0';
            }
        }
    }
    int len2 = strlen(s) - 1;
    for (int i = 0; i < len2 / 2 + len2 % 2; i++)
    {
        char temp = s[i];
        s[i] = s[len2 - i];
        s[len2 - i] = temp;
    }
    if (op == 1)
    {
        for (int i = len1; i >= 0; i--)
        {
            if (s[i] == '0' && s[i + 1] == '\0')
            {
                s[i] = '\0';
            }
        }
    }
    return;
}
int main()
{
    int mode = 1;
    scanf("%s", s);
    if (strchr(s, '.') != NULL)
    {
        mode = 2;
    }
    else if (strchr(s, '/') != NULL)
    {
        mode = 3;
    }
    else if (strchr(s, '%') != NULL)
    {
        mode = 4;
    }
    switch (mode)
    {
    case 1:
        rev(s, 0);
        printf("%s", s);
        break;
    case 2:
        char *p = strchr(s, '.');
        strcpy(s1, p + 1);
        *p = '\0';
        rev(s, 0);
        rev(s1, 1);
        printf("%s.%s", s, s1);
        break;
    case 3:
        char *q = strchr(s, '/');
        strcpy(s1, q + 1);
        *q = '\0';
        rev(s, 0);
        rev(s1, 0);
        printf("%s/%s", s, s1);
        break;
    case 4:
        s[strlen(s) - 1] = '\0';
        rev(s, 0);
        printf("%s%%", s);
        break;
    }
    return 0;
}