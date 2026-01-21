#include <stdio.h>
#include <string.h>
char s[10005];
char s1[10005];
int printnum(char *a, int n)
{
    int base[5] = {0, 0, 0, 0, 0};
    int bases = 0, i = 0;
    while (n != 0)
    {
        base[i] = n % 10;
        i++;
        n /= 10;
        bases++;
    }
    i--;
    for (; i >= 0; i--)
    {
        *(a + bases - i) = base[i] + '0';
    }
    *(a + bases + 1) = '\0';
    return bases;
}
int rar(char *a, int len)
{
    strcpy(s1, a + len);
    int ret = printnum(a, len);
    strcat(s, s1);
    return ret;
}
int main()
{
    scanf("%s", s);
    char *p = s;
    while (*(p + 1) != '\0')
    {
        int len = 1;
        char *p1 = p;
        while (*p == *(p + 1) && *(p + 1) != '\0')
        {
            p++;
            len++;
        }
        if (len > 1)
        {
            p = p1 + rar(p1, len) + 1;
        }
        else
        {
            p++;
        }
    }
    printf("%s", s);
    return 0;
}