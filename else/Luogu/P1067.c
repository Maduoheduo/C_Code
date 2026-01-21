#include <stdio.h>
int x[105];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &x[i]);
    }
    if (n == 0)
    {
        printf("%d", x[0]);
    }
    else if (n == 1)
    {
        if (x[0] != 0)
        {
            if (x[0] == 1)
            {
                printf("x");
            }
            else if (x[0] == -1)
            {
                printf("-x");
            }
            else
            {
                printf("%dx", x[0]);
            }
        }
        if (x[1] > 0)
        {
            printf("+");
        }
        printf("%d", x[1]);
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (x[i] == 0)
            {
                continue;
            }
            else if (i == 0)
            {
                if (x[0] == 1)
                {
                    printf("x^%d", n);
                }
                else if (x[0] == -1)
                {
                    printf("-x^%d", n);
                }
                else
                {
                    printf("%dx^%d", x[i], n);
                }
            }
            else
            {
                if (x[i] == 1)
                {
                    printf("+x^%d", n - i);
                }
                else if (x[i] == -1)
                {
                    printf("-x^%d", n - i);
                }
                else if (x[i] > 0)
                {
                    printf("+%dx^%d", x[i], n - i);
                }
                else
                {
                    printf("%dx^%d", x[i], n - i);
                }
            }
        }
        if (x[n - 1] != 0)
        {
            if (x[n - 1] == 1)
            {
                printf("+x");
            }
            else if (x[n - 1] == -1)
            {
                printf("-x");
            }
            else if (x[n - 1] > 0)
            {
                printf("+%dx", x[n - 1]);
            }
            else
            {
                printf("%dx", x[n - 1]);
            }
        }
        if (x[n] != 0)
        {
            if (x[n] > 0)
            {
                printf("+");
            }
            printf("%d", x[n]);
        }
    }
    return 0;
}