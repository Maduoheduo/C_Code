#include <stdio.h>
#include <string.h>
char s[10], t[10];
int main()
{
    while (scanf("%s%s", s, t) != EOF)
    {
        if (strlen(s) == strlen(t))
        {
            if (strcmp(s, t) > 0)
            {
                printf("%s\n", t);
            }
            else
            {
                printf("%s\n", s);
            }
        }
        else
        {
            if (strcmp(s, t) > 0)
            {
                printf("%s\n", s);
            }
            else
            {
                printf("%s\n", t);
            }
        }
    }
    return 0;
}