#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[505];
char s1[50];
int num(char *p)
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
void read(char s[])
{
    // 终止条件
    if (strchr(s, '[') == NULL)
    {
        printf("%s", s);
        return;
    }
    char *p0 = s;
    int len = strlen(s);
    int flag = 0;
    while (*p0 != '\0')
    {
        // 取前置字母
        if (isalpha(*p0))
        {
            putchar(*p0);
        }
        else if (*p0 == '[')
        {
            // 取数字
            char *q = p0;
            flag = 1;
            int n = num(p0 + 1);
            // 取括号内
            while (q < s + len)
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
                if (flag == 0)
                {
                    break;
                }
            }
            p0 = strchr(p0, '[') + 1;
            char s3[10005];
            strncpy(s3, p0, (int)(q - p0));
            s3[(int)(q - p0)] = '\0';
            for (int i = 0; i < n; i++)
            {
                read(s3);
            }
            s3[0] = '\0';
            p0 = q;
        }
    }
    p0++;
}

int main()
{

    scanf("%s", s);
    read(s);

    return 0;
}