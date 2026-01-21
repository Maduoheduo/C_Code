#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[260];
int main()
{
    int a[3];
    scanf("%s", s);
    char *p = s, *q = s;
    while (strchr(p, '=') != NULL)
    {
        p = strchr(p, '=') + 1;
        q = strchr(q, ':') - 1;
        if (isdigit(*p))
        {
            a[*q - 'a'] = *p - '0';
        }
        else
        {
            a[*q - 'a'] = a[*p - 'a'];
        }
        q += 2;
    }
    printf("%d %d %d", a[0], a[1], a[2]);
    return 0;
}