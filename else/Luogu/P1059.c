#include <stdio.h>
int a[105];
int hash[1005];
int output[105];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        hash[a[i]] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 1005; i++)
    {
        if (hash[i] == 1)
        {
            output[cnt] = i;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", output[i]);
    }
    return 0;
}