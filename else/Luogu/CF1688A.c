#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        for (int i = 1;; i++)
        {
            if ((x & i) > 0 && (x ^ i) > 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}