#include <stdio.h>
int s[505][505];
void rotate(int y, int x, int n, int z)
{ // i,j是左上角坐标;n是长度
    // copy+转置
    int s1[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s1[i][j] = s[y + i][x + j];
        }
    }
    // copy回去
    if (z == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s[y + i][x + j] = s1[n - 1 - j][i];
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s[y + i][x + j] = s1[j][n - 1 - i];
            }
        }
    }
}
void write(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = a;
            a++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x, y, r, z;
        scanf("%d%d%d%d", &x, &y, &r, &z);
        rotate(x - 1 - r, y - 1 - r, 2 * r + 1, z); // 为什么这里还要转置一次？
    }
    write(n);
    return 0;
}