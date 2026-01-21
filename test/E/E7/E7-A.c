#include <stdio.h>
#include <string.h>
char s[1005];
char s1[1005];
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int k;
        char *p = s;
        scanf("%d", &k);
        getchar();
        gets(s);
        p += strlen(s) - k;
        strcpy(s1, p);
        printf("%s\n", s1);
    }
    return 0;
}