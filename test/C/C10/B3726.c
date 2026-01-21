#include <stdio.h>
#include <string.h>
char s[10][55];
void insert(int x, int y, int i)
{
    char s1[55];
    strcpy(s1, &s[y - 1][i]);
    s[y - 1][i] = '\0';
    strcat(s[y - 1], s[x - 1]);
    strcat(s[y - 1], s1);
    return;
}
int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }
    int op, x, y, i;
    for (int j = 0; j < q; j++)
    {
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            scanf("%d%d%d", &x, &y, &i);
            insert(x, y, i);
            break;
        case 2:
            scanf("%d", &y);
            printf("%s\n", s[y - 1]);
        }
    }
    return 0;
}