#include <stdio.h>
int num[9];
void getnum(int i)
{
    num[i / 100 - 1] = 1;
    num[i / 10 % 10 - 1] = 1;
    num[i % 10 - 1] = 1;
}
int judge(int a, int b, int c)
{
    for (int i = 0; i < 9; i++)
    {
        num[i] = 0;
    }
    getnum(a);
    getnum(b);
    getnum(c);
    for (int i = 0; i < 9; i++)
    {
        if (num[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", judge(a, b, c));
}