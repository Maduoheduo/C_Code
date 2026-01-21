#include <stdio.h>
int a[10005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    unsigned char *p = (unsigned char *)a;
    int cnt = 0;
    while (p <= (unsigned char *)a + n * sizeof(int))
    {
        if (*p == 114)
        {
            cnt++;
        }
        p++;
    }
    printf("%d", cnt);
    return 0;
}