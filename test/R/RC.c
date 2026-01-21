#include <stdio.h>
#define ui unsigned int
ui s[1005];
int main()
{
    ui m, n;
    scanf("%u%u", &m, &n);
    ui x;
    ui index, flag = 0;
    for (ui i = 0; i < n; i++)
    {
        flag = 0;
        scanf("%u", &x);
        index = x % m;
        if (s[index] == 0)
        {
            s[index] = x;
            flag = 1;
        }
        else
        {
            for (index = x % m + 1; index < m; index++)
            {
                if (s[index] == 0)
                {
                    s[index] = x;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                for (index = 0; index < x % m; index++)
                {
                    if (s[index] == 0)
                    {
                        s[index] = x;
                        flag = 1;
                        break;
                    }
                }
            }
        }
    }
    for (ui i = 0; i < m; i++)
    {
        printf("%u ", s[i]);
    }
    return 0;
}