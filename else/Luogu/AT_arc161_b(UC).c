#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        int flag = 0;
        for (long long i = n; i >= 0; i--)
        {
            int temp = i;
            int cnt = 0;
            while (temp != 0)
            {
                if ((temp & 1) == 1)
                {
                    cnt++;
                }
                temp = temp >> 1;
            }
            if (cnt == 3)
            {
                flag = 1;
                printf("%lld\n", i);
                break;
            }
        }
        if (flag == 0)
        {
            printf("-1\n");
        }
    }
}