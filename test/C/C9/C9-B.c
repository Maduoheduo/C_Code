#include <stdio.h>
int a[1005];
int main()
{
    int N, X, flag = 0;
    scanf("%d%d", &N, &X);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] == X)
        {
            if (i == 0)
            {
                printf("%d", a[N - 1]);
                flag = 1;
                break;
            }
            else
            {
                flag = 1;
                printf("%d", a[i - 1]);
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }
    return 0;
}