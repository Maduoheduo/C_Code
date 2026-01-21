#include <stdio.h>
#include <string.h>
char s[100005];
int main()
{
    int n, m, k;
    scanf("%d", &n);
    while (n--)
    {
        unsigned long long num = 0;
        scanf("%d%d", &m, &k);
        scanf("%s", s);
        int len = strlen(s);
        unsigned long long base = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            num += (base % k * (s[i] - '0') % k) % k;
            base = base % k * m;
            num %= k;
        }
        printf("%llu\n", num % k);
    }
    return 0;
}