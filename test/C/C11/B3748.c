// 统一维护各字符出现次数
#include <stdio.h>
#include <string.h>
char s[100005][105]; //////
int hash[100005][26];
int cmp(int x, int y)
{
    for (int i = 0; i < 26; i++)
    {
        if (hash[x][i] != hash[y][i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s[i]);
        for (int j = 0; s[i][j] != '\0'; j++)
        {
            hash[i][s[i][j] - 'a']++;
        }
    }

    for (int i = 1; i <= q; i++)
    {
        int op, x, y;
        scanf("%d%d%d", &op, &x, &y);
        if (op == 1)
        {
            for (int i = 0; i < 26; i++)
            {
                hash[y][i] += hash[x][i];
            }
        }
        else
        {
            if (cmp(x, y))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}