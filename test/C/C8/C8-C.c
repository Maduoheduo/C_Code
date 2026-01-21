#include <stdio.h>
#include <string.h>
char a[10005];
int main()
{
    char *m = a, *n = a;
    while (scanf("%s", a) != -1)
    {
        int len = strlen(a);
        if (len == 1)
        {
            printf("0\n");
            continue;
        }
        int cnt = 0;
        m = a;
        n = a + strlen(a) - 1;
        while (m < n)
        {
            if (*m != *n)
            {
                cnt++;
            }
            n--;
            m++;
        }

        printf("%d\n", cnt);
    }
    return 0;
}