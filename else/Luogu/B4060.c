#include <stdio.h>
int main()
{
    int a, b, k;
    scanf("%d%d%d", &a, &b, &k);
    printf("%d\n%d\n%d\n%d\n%d\n%d", a & b, a | b, a ^ b, ~a, a << k, a >> k);
    return 0;
}