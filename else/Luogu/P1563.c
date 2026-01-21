#include <stdio.h>
char s[100005][15];
int ward[100005];
int main()
{
    int n, m;
    scanf("%d%d\n", &n, &m);
    for (int i = 0; i < n; i++)
    {
        char ch;
        ch = getchar();
        if (ch == '0')
        { // 朝外为1，朝内为-1
            ward[i] = -1;
        }
        else
        {
            ward[i] = 1;
        }
        getchar();
        scanf("%s", s[i]);
        getchar();
    }
    long long index = 0;
    for (int i = 0; i < m; i++)
    {
        int c, d;
        scanf("%d%d", &c, &d);
        if (c == 0)
        {
            index += ward[index] * d;
        }
        else
        {
            index -= ward[index] * d;
        }
        if (index < 0)
        {
            index += n;
        }
        if (index >= n)
        {
            index -= n;
        }
    }
    printf("%s", s[index]);
    return 0;
}