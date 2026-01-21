#include <stdio.h>
long long s[21][21];
int check(int x, int y, int x0, int y0, int xb, int yb)
{
    if (x == xb && y == yb)
    {
        return 1;
    }
    if (x == x0 + 2 && (y == y0 + 1 || y == y0 - 1))
    {
        return 0;
    }
    if (x == x0 - 2 && (y == y0 + 1 || y == y0 - 1))
    {
        return 0;
    }
    if (y == y0 + 2 && (x == x0 + 1 || x == x0 - 1))
    {
        return 0;
    }
    if (y == y0 - 2 && (x == x0 + 1 || x == x0 - 1))
    {
        return 0;
    }
    if (y == y0 && x == x0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int x0, y0, xb, yb;
    scanf("%d%d%d%d", &xb, &yb, &x0, &y0);
    s[yb][xb] = 1;
    for (int x = 0; x < xb; x++)
    {
        s[yb][x] = 1;
    }
    for (int y = 0; y < yb; y++)
    {
        s[y][xb] = 1;
    }
    s[y0][x0] = 0;
    if (x0 + 2 <= 20 && y0 - 1 >= 0)
        s[y0 - 1][x0 + 2] = 0;
    if (x0 + 2 <= 20 && y0 + 1 <= 20)
        s[y0 + 1][x0 + 2] = 0;
    if (x0 - 2 >= 0 && y0 - 1 >= 0)
        s[y0 - 1][x0 - 2] = 0;
    if (x0 - 2 >= 0 && y0 + 1 <= 20)
        s[y0 + 1][x0 - 2] = 0;
    if (x0 - 1 >= 0 && y0 - 2 >= 0)
        s[y0 - 2][x0 - 1] = 0;
    if (x0 + 1 <= 20 && y0 - 2 >= 0)
        s[y0 - 2][x0 + 1] = 0;
    if (x0 - 1 >= 0 && y0 + 2 <= 20)
        s[y0 + 2][x0 - 1] = 0;
    if (x0 + 1 <= 20 && y0 + 2 <= 20)
        s[y0 + 2][x0 + 1] = 0;
    s[yb][xb] = 1;
    for (int y = yb; y >= 0; y--)
    {
        for (int x = xb; x >= 0; x--)
        {
            if (check(x, y, x0, y0, xb, yb) == 1)
            {
                if (x == xb && y == yb)
                {
                    s[y][x] = 1;
                }
                else if (x == xb)
                {
                    s[y][x] = s[y + 1][x];
                }
                else if (y == yb)
                {
                    s[y][x] = s[y][x + 1];
                }
                else
                {
                    s[y][x] = s[y + 1][x] + s[y][x + 1];
                }
            }
        }
    }
    printf("%lld", s[0][0]);
    return 0;
}