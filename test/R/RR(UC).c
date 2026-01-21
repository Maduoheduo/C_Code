#include <stdio.h>
char s1[2] = "1", s2[2] = "0";
void galema(int n)
{
    if (n == 1)
    {
        printf("0");
        printf("\n");
        printf("1\n");
        return;
    }
    for (int i = 0; i < (1 << (n - 1)); i++)
    {
        printf("0");
        galema(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    return 0;
}

// 0  1
// 00 01           11 10
// 000 001 011 010  110 111 101 100