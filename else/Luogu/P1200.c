#include <stdio.h>
#include <string.h>
int main()
{
    char s1[6];
    char s2[6];
    scanf("%s", s1); // 神秘编译器
    scanf("%s", s2);
    long long n1 = 1, n2 = 1;
    for (int i = 0; i < strlen(s1); i++)
    {
        n1 *= s1[i] - 'A' + 1;
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        n2 *= s2[i] - 'A' + 1;
    }
    n1 %= 47;
    n2 %= 47;
    if (n1 % 47 == n2 % 47)
    {
        printf("GO");
    }
    else
    {
        printf("STAY");
    }
    return 0;
}