#include <stdio.h>
int isdigit(int a)
{
    if (a >= '0' && a <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
long long Read_digit()
{
    int sign = 1;
    long long read = 0, base = 1;
    char ch;
    ch = getchar();
    while (isdigit(ch) != 1)
    {
        if (ch == '-')
        {
            sign = -1;
            ch = getchar();
            break;
        }
        else
        {
            ch = getchar();
        }
    }
    while (isdigit(ch) == 1)
    {
        read += base * (ch - '0');
        base *= 10;
        ch = getchar();
    }
    return sign * read;
}
void Write_digit(long long x)
{
    if (x < 0)
    {
        putchar('-');
        x = -x;
    }
    if (x > 9)
    {
        Write_digit(x / 10);
    }
    putchar(x % 10 + '0');
    return;
}
int main()
{
    long long x = Read_digit();
    Write_digit(x);
    return 0;
    getchar();
}
int toint(char a[]) // 字符串转整数
{
    int num = 0;
    int sign = 1, flag = 0;
    int n = strlen(a);
    if (a[0] == '-')
    {
        sign = -1;
        flag = 1;
    }
    for (int i = flag; i < n; i++)
    {
        num *= 10;
        num += a[i] - '0';
    }
    return num * sign;
}
double todouble(char a[]) // 字符串转小数
{
    char *p = strchr(a, '.');
    double num = 0, sign = 1.0;
    char *q = a;
    if (*q == '-')
    {
        sign = -1;
        q++;
    }
    while (q < p)
    {
        num *= 10;
        num += *q - '0';
        q++;
    }
    q += 1;
    double base = 0.1;
    while (q < a + strlen(a))
    {
        num += base * (*q - '0');
        base *= 0.1;
        q++;
    }
    return num * sign;
}