#include <stdio.h>
#include <string.h>
int n, m;
char s[55][55];
int cnt[55][55];
int W(int i)
{
    int cnt = 0;
    for (int j = 0; j < m; j++)
    {
        if (s[i][j] != 'W')
        {
            cnt++;
        }
    }
    return cnt;
}
int B(int i)
{
    int cnt = 0;
    for (int j = 0; j < m; j++)
    {
        if (s[i][j] != 'B')
        {
            cnt++;
        }
    }
    return cnt;
}
int R(int i)
{
    int cnt = 0;
    for (int j = 0; j < m; j++)
    {
        if (s[i][j] != 'R')
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    memset(cnt, -1, sizeof(cnt));
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }
    int i1 = 0, i2 = n - 1;
    for (i1 = 0; i1 < n - 2; i1++)
    {
        for (i2 = n - 1; i2 > i1 + 1; i2--)
        {
            cnt[i1][i2] = 0;
            for (int i = 0; i <= i1; i++)
            {
                cnt[i1][i2] += W(i);
            }
            for (int i = n - 1; i >= i2; i--)
            {
                cnt[i1][i2] += R(i);
            }
            for (int i = i1 + 1; i < i2; i++)
            {
                cnt[i1][i2] += B(i);
            }
        }
    }
    int min = 2500;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cnt[i][j] < min && cnt[i][j] != -1)
            {
                min = cnt[i][j];
            }
        }
    }
    printf("%d", min);
    return 0;
}