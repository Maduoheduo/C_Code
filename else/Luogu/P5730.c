#include <stdio.h>
char s[105];
char S[5][405];
int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", s);
    char *p = s;
    int x;
    for (int i = 0; i < n; i++)
    {
        switch (*p - '0')
        {
        case 0:
            for (int y = 0; y < 5; y++)
            {
                S[y][x] = 'X';
                S[y][x + 2] = 'X';
            }
            for (int y = 1; y < 4; y++)
            {
                S[y][x + 1] = '.';
            }
            S[0][x + 1] = 'X';
            S[4][x + 1] = 'X';
            break;
        case 1:
            for (int y = 0; y < 5; y++)
            {
                S[y][x] = '.';
                S[y][x + 1] = '.';
                S[y][x + 2] = 'X';
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[1][x] = '.';
            S[1][x + 1] = '.';
            S[3][x + 1] = '.';
            S[3][x + 2] = '.';
            break;
        case 3:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[1][x] = '.';
            S[1][x + 1] = '.';
            S[3][x] = '.';
            S[3][x + 1] = '.';
            break;
        case 4:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[0][x + 1] = '.';
            S[1][x + 1] = '.';
            S[3][x] = '.';
            S[3][x + 1] = '.';
            S[4][x] = '.';
            S[4][x + 1] = '.';
            break;
        case 5:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[1][x + 1] = '.';
            S[1][x + 2] = '.';
            S[3][x] = '.';
            S[3][x + 1] = '.';
            break;
        case 6:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[1][x + 1] = '.';
            S[1][x + 2] = '.';
            S[3][x + 1] = '.';
            break;
        case 7:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = '.';
                }
            }
            for (int y = 0; y < 5; y++)
            {
                S[y][x + 2] = 'X';
            }
            S[0][x] = 'X';
            S[0][x + 1] = 'X';
            break;
        case 8:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[1][x + 1] = '.';
            S[3][x + 1] = '.';
            break;
        case 9:
            for (int i = 0; i < 3; i++)
            {
                for (int y = 0; y < 5; y++)
                {
                    S[y][x + i] = 'X';
                }
            }
            S[1][x + 1] = '.';
            S[3][x] = '.';
            S[3][x + 1] = '.';
            break;
        }
        x += 3;
        if (i != n - 1)
        {
            for (int y = 0; y < 5; y++)
            {
                S[y][x] = '.';
            }
        }
        x++;
        p++;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 * n - 1; j++)
        {
            putchar(S[i][j]);
        }
        printf("\n");
    }
    return 0;
}