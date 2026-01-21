#include <stdio.h>
int main()
{
    int x1, c, k;
    scanf("%d%d%d", &x1, &c, &k);
    for (int i = 1; i < k; i++)
    {
        x1 = (x1 * x1 + c) % 10000;
    }
    printf("%d", x1);
    return 0;
}