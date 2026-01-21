#include <stdio.h>
#include <string.h>
#define ull unsigned long long
char s[20];
ull sa[1000005], sb[1000005];
ull me[1005];
ull read(char *s)
{
    ull ret = 0;
    char *p = s;
    while (*p != '\0')
    {
        ret *= 10;
        ret += *p - '0';
        p++;
    }
    return ret;
}
int geta()
{ // 取出系数
    char *p = s;
    if (strchr(s, 'x') == NULL)
    {
        return read(s);
    }
    else
    {
        if (s[0] == 'x')
        {
            return 1;
        }
        char s1[20];
        strcpy(s1, s);
        p = strchr(s1, 'x');
        *p = '\0';
        return read(s1);
    }
}
int getb()
{ // 取出指数
    if (strchr(s, 'x') == NULL)
    {
        return 0;
    }
    if (strchr(s, '^') == NULL)
    {
        return 1;
    }
    else
    {
        return read(strchr(s, '^') + 1);
    }
}
void df(ull sa[], ull sb[], int n, int i)
{
    if (n == 0)
        return;
    if (sb[i] == 0)
    {
        sa[i] = 0;
        return;
    }
    sa[i] *= sb[i];
    sb[i]--;
    df(sa, sb, n - 1, i);
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        scanf("%s", s);
        sa[i] = geta(), sb[i] = getb();
        df(sa, sb, n, i);
    }
    for (int i = 0; i < m; i++)
    {
        me[sb[i]] += sa[i];
    }
    int flag = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (me[i] != 0)
            flag++;
    }
    for (int i = 1002; i >= 0; i--)
    {
        if (me[i] != 0)
        {
            if (i == 0)
            {
                printf("%llu", me[i]);
                continue;
            }
            if (me[i] != 1)
            {
                printf("%llu", me[i]);
            }
            printf("x");
            if (i > 1)
            {
                printf("^%d", i);
            }
            flag--;
            if (flag != 0)
            {
                printf("+");
            }
        }
    }
    return 0;
}