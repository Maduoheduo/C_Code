#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int score[3] = {0, 0, 0};
    while (m--)
    {
        int s[3];
        int h[3] = {0, 0, 0};
        int cnt = 0;
        scanf("%d%d%d", &s[0], &s[1], &s[2]);
        for (int i = 0; i < 3; i++)
        {
            switch (s[i])
            {
            case 0:
                h[0]++;
                break;
            case 1:
                h[1]++;
                break;
            case 2:
                h[2]++;
                break;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (h[i] != 0)
            {
                cnt++;
            }
        }
        if (cnt == 1 || cnt == 3)
        {
            continue;
        }
        else
        {
            if (h[2] == 0)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (s[i] == 1)
                    {
                        score[i]++;
                    }
                }
            }
            else if (h[1] == 0)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (s[i] == 0)
                    {
                        score[i]++;
                    }
                }
            }
            else if (h[0] == 0)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (s[i] == 2)
                    {
                        score[i]++;
                    }
                }
            }
        }
    }
    printf("%d %d %d", score[0], score[1], score[2]);
    return 0;
}