#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[1005];
char s1[1005], s2[1005];
int judge(char *p)
{
    // p越界检查？
    if (p == s || *(p + 1) == '\0')
    {
        return 0;
    }
    if ((islower(*(p - 1)) && islower(*(p + 1))) || ((isdigit(*(p - 1))) && isdigit(*(p + 1))))
    {
        if (*(p + 1) - *(p - 1) == 1)
        {
            return 2;
        }
        if (*(p + 1) - *(p - 1) > 0)
        {
            return 1;
        }
    }
    return 0;
}
void stretch_(char *p, char *q)
{
    strncpy(s1, p, q - p);
    s1[q - p] = '\0';
    printf("%s", s1);
}
void stretch(char *p, char *q, int p1, int p2, int p3)
{
    strncpy(s1, p + 1, q - p - 1);
    s1[q - p - 1] = '\0';
    if (p3 == 1)
    {
        switch (p1)
        {
        case 1:
            if (isdigit(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p - 1) + i);
                    }
                }
            }
            else if (islower(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p - 1) + i);
                    }
                }
            }
            break;
        case 2:
            if (isdigit(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p - 1) + i);
                    }
                }
            }
            else if (islower(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p - 1) + i + 'A' - 'a');
                    }
                }
            }
            break;
        case 3:
            for (int i = 1; i < *(p + 1) - *(p - 1); i++)
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
            if (isdigit(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p + 1) - i);
                    }
                }
            }
            else if (islower(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p + 1) - i);
                    }
                }
            }
            break;
        case 2:
            if (isdigit(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p + 1) - i);
                    }
                }
            }
            else if (islower(*(p - 1)))
            {
                for (int i = 1; i < *(p + 1) - *(p - 1); i++)
                {
                    for (int j = 0; j < p2; j++)
                    {
                        printf("%c", *(p + 1) - i + 'A' - 'a');
                    }
                }
            }
            break;
        case 3:
            for (int i = 1; i < *(p + 1) - *(p - 1); i++)
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
    char *p = s, *q = s;
    int n = strlen(s);
    char *t = strchr(s, '-');
    strncpy(s1, s, t - s);
    s1[t - s] = '\0';
    printf("%s", s1);
    t = NULL;
    while (strchr(p, '-') != NULL && *(p + 1) != '\0')
    {
        p = strchr(p, '-');
        if (judge(p) == 0)
        {
            q = p + 1;
            int flag = 0;
            while (strchr(q, '-') != NULL && *(q + 1) != '\0')
            {
                q = strchr(q, '-');
                if (judge(q) == 1)
                {
                    flag = 1;
                    break;
                }
                q++;
            }
            if (flag == 0)
            {
                q = s + n;
            }
            stretch_(p, q);
            p = strchr(p + 1, '-') + 1;
            continue;
        }
        int flag = 0;
        q = p + 1;
        while (strchr(q, '-') != NULL && *(q + 1) != '\0')
        {
            q = strchr(q, '-');
            if (judge(q) == 1)
            {
                flag = 1;
                break;
            }
            q++;
        }
        if (flag == 0)
        {
            q = s + n;
        }
        stretch(p, q, p1, p2, p3);
        p = strchr(p + 1, '-') + 1;
    }
    return 0;
}