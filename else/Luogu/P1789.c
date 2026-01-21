#include <stdio.h>
int s[120][120]; // 原点为s[2][2]
int main()
{
    int n, m, k;
    int i, j;
    scanf("%d%d%d", &n, &m, &k);
    for (int q = 0; q < m; q++)
    {
        scanf("%d%d", &j, &i);
        i--;
        j--;
        for (int a = -1; a <= 1; a++)
        {
            for (int b = -1; b <= 1; b++)
            {
                s[a + i + 2][b + j + 2] = 1;
            }
        }
        s[i + 4][j + 2] = 1;
        s[i][j + 2] = 1;
        s[i + 2][j + 4] = 1;
        s[i + 2][j] = 1;
    }
    for (int q = 0; q < k; q++)
    {
        scanf("%d%d", &i, &j);
        i--;
        j--;
        for (int a = -2; a <= 2; a++)
        {
            for (int b = -2; b <= 2; b++)
            {
                s[i + a + 2][b + j + 2] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i < 2 + n; i++)
    {
        for (int j = 2; j < 2 + n; j++)
        {
            if (s[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}