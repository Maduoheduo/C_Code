#include <stdio.h>
int s[1005][1005][2];
int main()
{
    int m, n, sx, sy;
    scanf("%d%d%d%d", &m, &n, &sy, &sx);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d%d", &s[i][j][0], &s[i][j][1]);
        }
    }
    int i = sy, j = sx;
    while (!(i == 0 && j == 0))
    {
        printf("%d %d\n", i, j);
        int temp = i;
        i = s[i][j][0];
        j = s[temp][j][1];
    }
    return 0;
}