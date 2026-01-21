// 横竖问题长为一需特判
// 连续
#include <stdio.h>
int r, c, k, Cnt = 0;
char s[105][105];
void getglade(int a, int op)
{
    int cnt = 0;
    if (op == 0)
    { // 行
        for (int j = 0; j < c; j++)
        {
            if (s[a][j] == '.')
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    Cnt += cnt - k + 1;
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            Cnt += cnt - k + 1;
        }
    }
    else
    { // 列
        for (int j = 0; j < r; j++)
        {
            if (s[j][a] == '.')
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    Cnt += cnt - k + 1;
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            Cnt += cnt - k + 1;
        }
    }
}
int main()
{
    scanf("%d%d%d", &r, &c, &k);
    for (int i = 0; i < r; i++)
    {
        scanf("%s", s[i]);
    }
    for (int i = 0; i < r; i++)
    {
        getglade(i, 0);
    }
    for (int j = 0; j < c; j++)
    {
        getglade(j, 1);
    }
    if (k == 1)
    { // 特判：横竖一样
        Cnt /= 2;
    }
    printf("%d", Cnt);
    return 0;
}