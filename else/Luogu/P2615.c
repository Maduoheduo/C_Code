#include <stdio.h>
int s[39][39];
int main()
{
    int n;
    scanf("%d", &n);
    s[0][n / 2] = 1;
    int x = 0, y = n / 2;
    for (int i = 2; i <= n * n; i++)
    {
        if (x == 0 && y != n - 1)
        {
            s[n - 1][y + 1] = i;
            x = n - 1;
            y = y + 1;
        }
        else if (x != 0 && y == n - 1)
        {
            s[x - 1][0] = i;
            x = x - 1;
            y = 0;
        }
        else if (x == 0 && y == n - 1)
        {
            s[x + 1][y] = i;
            x = x + 1;
            y = y;
        }
        else
        {
            if (s[x - 1][y + 1] == 0)
            {
                s[x - 1][y + 1] = i;
                x = x - 1;
                y = y + 1;
            }
            else
            {
                s[x + 1][y] = i;
                x = x + 1;
                y = y;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}