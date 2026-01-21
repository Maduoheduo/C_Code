#include <stdio.h>
char s[105][105];
int check(int i, int j, int n, int m)
{
    if (i < 0 || j < 0 | i >= n || j >= m)
    {
        return 0;
    }
    if (s[i][j] != '*')
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        getchar();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '?')
            {
                int cnt = 0;
                for (int i1 = 1; i1 >= -1; i1--)
                {
                    for (int j1 = 1; j1 >= -1; j1--)
                    {
                        if (check(i + i1, j + j1, n, m))
                        {
                            cnt++;
                        }
                    }
                }
                s[i][j] = '0' + cnt;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            putchar(s[i][j]);
        }
        printf("\n");
    }
    return 0;
}