#include <stdio.h>
#include <string.h>
int s[1005][1005];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i0, j0;
        scanf("%d", &n);
        memset(s, 0, sizeof(s));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &s[i][j]);
                if (s[i][j] == 2)
                {
                    i0 = i;
                    j0 = j;
                }
            }
        }
        int i = i0, j = j0, cnt = 0;
        while (s[i][j] != 1 && i < n)
        {
            cnt++;
            i++;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && i >= 0)
        {
            cnt++;
            i--;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && j < n)
        {
            cnt++;
            j++;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && j >= 0)
        {
            cnt++;
            j--;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && i < n && j < n && i >= 0 && j >= 0)
        {
            cnt++;
            i++;
            j++;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && i < n && j < n && i >= 0 && j >= 0)
        {
            cnt++;
            i++;
            j--;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && i < n && j < n && i >= 0 && j >= 0)
        {
            cnt++;
            i--;
            j--;
        }
        i = i0, j = j0;
        while (s[i][j] != 1 && i < n && j < n && i >= 0 && j >= 0)
        {
            cnt++;
            i--;
            j++;
        }
        cnt -= 8;
        printf("%d\n", cnt);
    }
    return 0;
}