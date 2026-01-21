#include <stdio.h>
#include <string.h>
char dst[1005], str[1005];
int match(char *p, int len)
{
    char s1[1005];
    strncpy(s1, p, len);
    s1[len] = '\0';
    if (strcmp(str, s1) == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    while (scanf("%s", dst) != EOF)
    {
        scanf("%s", str);
        int len = strlen(str), LEN = strlen(dst), cnt = 0;
        char *p = dst;
        while ((p = strchr(p, str[0])) != NULL && p <= dst + LEN - len)
        {
            if (match(p, len) == 1)
            {
                cnt++;
            }

            p++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}