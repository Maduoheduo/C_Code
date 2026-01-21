#include <stdio.h>
int s[405][405];
int output[150][150];
int find(int x, int y)
{
    int max = s[x][y];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[x + i][y + j] > max)
            {
                max = s[x + i][y + j];
            }
        }
    }
    return max;
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for (int i = 0; i < m / 3; i++)
    {
        for (int j = 0; j < n / 3; j++)
        {
            output[i][j] = find(i * 3, j * 3);
        }
    }
    for (int i = 0; i < m / 3; i++)
    {
        for (int j = 0; j < n / 3; j++)
        {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }
    return 0;
}