// 如何输出占三字符的数
// 数组边界要慎重！
#include <stdio.h>
int c[21];
void output(int r0)
{
    for (int i = 1; i <= r0; i++)
    {
        printf("%3d", c[i]);
    }
    printf("\n");
}
void C(int n, int r, int s, int r0)
{
    if (r == 0)
    {
        output(r0);
        return;
    }
    for (int i = s; i <= n - r + 1; i++)
    {
        c[r0 - r + 1] = i;
        C(n, r - 1, i + 1, r0);
    }
}
int main()
{
    int n, r;
    scanf("%d%d", &n, &r);
    C(n, r, 1, r);
    return 0;
}