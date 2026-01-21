#include <stdio.h>
char s[55][55];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int min = 32767, exit = 0;
        int h, w, k;
        scanf("%d%d%d", &h, &w, &k);
        for (int i = 0; i < h; i++)
        {
            scanf("%s", s[i]);
        }
        if (k == 1)
        {
            int flag = 0;
            for (int i = 0; i < h && flag == 0; i++)
            {
                for (int j = 0; j < w && flag == 0; j++)
                {
                    if (s[i][j] == 'o')
                    {
                        printf("0\n");
                        flag = 1;
                    }
                }
            }
            if (flag == 0)
            {
                for (int i = 0; i < h && flag == 0; i++)
                {
                    for (int j = 0; j < w && flag == 0; j++)
                    {
                        if (s[i][j] == '.')
                        {
                            printf("1\n");
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            if (flag == 0)
            {
                printf("-1\n");
            }
        }
        else
        {
            for (int y = 0; y < h - k + 1; y++)
            {
                for (int x = 0; x < w - k + 1; x++)
                {
                    int flag = 1, cnt = 0;
                    for (int i = 0; i < k && flag == 1; i++)
                    {
                        for (int j = 0; j < k && flag == 1; j++)
                        {
                            if (s[y + i][x + j] == 'x')
                            {
                                flag = -1;
                                break;
                            }
                            else if (s[y + i][x + j] == '.')
                            {
                                cnt++;
                            }
                        }
                    }
                    if (cnt < min && flag == 1)
                    {
                        min = cnt;
                        exit = 1;
                    }
                }
            }
            if (exit == 1)
            {
                printf("%d\n", min);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}