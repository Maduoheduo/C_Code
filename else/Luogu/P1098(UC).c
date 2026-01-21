#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[1005];
int check(char *x)
{
    if (islower(*(x - 1)))
    {
        if (!islower(*(x + 1)))
        {
            return 0;
        }
    }
    if (isdigit(*(x - 1)))
    {
        if (!isdigit(*(x + 1)))
        {
            return 0;
        }
    }
    if (*(x - 1) >= *(x + 1))
    {
        return 0;
    }
    if (*(x - 1) + 1 == *(x + 1))
    {
        return -1;
    }
    return 1;
}
void stretch(char *p, int p1, int p2, int p3)
{
    if (check(p) == 0)
        return;
    if (check(p) == -1)
    {
        char s1[1005];
        strcpy(s1, p + 1);
        s1[strlen(s1)] = '\0';
        *p = '\0';
        strcat(s, s1);
        printf("%s", s);
        return;
    }
    char a = *(p - 1), b = *(p + 1);
    char s1[1005];
    strcpy(s1, p + 1);
    s1[strlen(s1)] = '\0';
    *p = '\0';
    printf("%s", s);
    if (p3 == 1)
    {
        switch (p1)
        {
        case 1:
            for (int i = 1; i < b - a; i++)
            {
                for (int j = 0; j < p2; j++)
                {
                    printf("%c", a + i);
                }
            }
            break;
        case 2:
            for (int i = 1; i < b - a; i++)
            {
                for (int j = 0; j < p2; j++)
                {
                    if (islower(a))
                    {
                        printf("%c", a + i + 'A' - 'a');
                    }
                    else
                    {
                        printf("%c", a + i);
                    }
                }
            }
            break;
        case 3:
            for (int i = 1; i < b - a; i++)
            {
                for (int j = 0; j < p2; j++)
                {
                    printf("*");
                }
            }
            break;
        }
    }
    else
    {
        switch (p1)
        {
        case 1:
            for (int i = 1; i < b - a; i++)
            {
                for (int j = 0; j < p2; j++)
                {
                    printf("%c", b - i);
                }
            }
            break;
        case 2:
            for (int i = 1; i < b - a; i++)
            {
                for (int j = 0; j < p2; j++)
                {
                    if (islower(a))
                    {
                        printf("%c", b - i + 'A' - 'a');
                    }
                    else
                    {
                        printf("%c", b - i);
                    }
                }
            }
            break;
        case 3:
            for (int i = 1; i < b - a; i++)
            {
                for (int j = 0; j < p2; j++)
                {
                    printf("*");
                }
            }
            break;
        }
    }
    printf("%s", s1);
}
int main()
{
    int p1, p2, p3;
    scanf("%d%d%d", &p1, &p2, &p3);
    scanf("%s", s);
    char *p = s;
    while (strchr(p, '-') != NULL)
    {
        p = strchr(p, '-');
        char *q = p;
        stretch(p, p1, p2, p3);
        p = q + 1;
    }
    return 0;
}