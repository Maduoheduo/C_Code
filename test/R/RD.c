#include <stdio.h>
#include <string.h>
char s[20];
int check1[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char check2[12] = "10X98765432";
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int sum = 0;
        scanf("%s", s);
        for (int i = 0; i < 17; i++)
        {
            sum += (int)(s[i] - '0') * check1[i];
        }
        sum = sum % 11;
        if (check2[sum] == s[17])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}