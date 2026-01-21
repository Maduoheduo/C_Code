#include <stdio.h>
int record[1005][3]; // 分别对应tid，pid，state
int win[105], pass[105][105];
int pass1[105];
void clearpass(int t, int p)
{
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            pass[i][j] = 0;
        }
    }
}
int main()
{
    int n, t, p, k, a = -1, b = -1, c = -1, d = -1;
    scanf("%d%d%d%d", &n, &t, &p, &k);
    // 输入
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &record[i][0], &record[i][1], &record[i][2]);
        if (record[i][2] == 1)
        {
            pass[record[i][0]][record[i][1]] = 1;
        }
    }
    // 判断拿奖
    for (int i = 1; i <= t; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= p; j++)
        {
            if (pass[i][j] == 1)
            {
                cnt++;
            }
        }
        if (cnt >= k)
        {
            win[i] = 1;
        }
    }
    // a
    for (int i = n - 1; i >= 0; i--)
    {
        if (record[i][2] == 1)
        {
            a = record[i][0];
            break;
        }
    }
    // b
    clearpass(t, p);
    int valid = 0;
    for (int i = 0; i < n; i++)
    {
        if (record[i][2] == 1)
        {
            if (pass[record[i][0]][record[i][1]] == 0)
            {
                pass[record[i][0]][record[i][1]] = 1;
                valid = record[i][0];
            }
        }
    }
    if (valid != 0)
    {
        b = valid;
    }
    // c
    clearpass(t, p);
    valid = 0;
    for (int i = 0; i < n; i++)
    {
        if (record[i][2] == 1)
        {
            if (pass[record[i][0]][record[i][1]] == 0)
            {
                pass[record[i][0]][record[i][1]] = 1;
                if (win[record[i][0]] == 0)
                {
                    valid = record[i][0];
                }
            }
        }
    }
    if (valid != 0)
    {
        c = valid;
    }
    // d
    valid = 0;
    for (int i = 0; i < n; i++)
    {
        if (record[i][2] == 1)
        {
            if (pass1[record[i][0]] == 0)
            {
                pass1[record[i][0]] = 1;
                valid = record[i][0];
            }
        }
    }
    if (valid != 0)
    {
        d = valid;
    }
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}