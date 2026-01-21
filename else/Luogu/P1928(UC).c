#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[1000005];
int getnum(char *p)
{
    int ret = 0;
    while (isdigit(*p))
    {
        ret *= 10;
        ret += *p - '0';
        p++;
    }
    return ret;
}
void expand(char *p)
{
    if (strchr(p, '[') == NULL)
    {
        while (*p != '\0')
        {
            if (*p != ']')
            {
                putchar(*p);
            }
            p++;
        }
        return;
    }
    while (strchr(p, '[') != NULL)
    {
        while (*p != '[' && *p != '\0')
        {
            putchar(*p);
            p++;
        }
        char *q = p + 1;
        int flag = 1;
        while (flag != 0)
        {
            q++;
            if (*q == '[')
            {
                flag++;
            }
            else if (*q == ']')
            {
                flag--;
            }
        }
        char s1[10005]; //
        strncpy(s1, p + 1, q - p - 1);
        s1[q - p - 1] = '\0';
        char *p1 = s1;
        int n = getnum(p1);
        if (n >= 10)
        {
            p1 += 2;
        }
        else
        {
            p1 += 1;
        }
        for (int i = 0; i < n; i++)
        {
            expand(p1);
        }
        if (*(q + 1) != '\0')
        {
            p = q + 1;
            expand(p);
        }
        else
        {
            return;
        }
    }
}
int main()
{
    scanf("%s", s);
    char *p0 = s;
    expand(p0);
    return 0;
}