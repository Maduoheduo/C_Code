#include <stdio.h>
#include <string.h>
char s[200005];
int judge(int i, int j)
{
    switch (s[i])
    {
    case 'b':
        if (s[j] != 'd')
        {
            return 0;
        }
        break;
    case 'd':
        if (s[j] != 'b')
        {
            return 0;
        }
        break;
    case 'o':
        if (s[j] != 'o')
        {
            return 0;
        }
        break;
    case 'p':
        if (s[j] != 'q')
        {
            return 0;
        }
        break;
    case 'q':
        if (s[j] != 'p')
        {
            return 0;
        }
        break;
    case 'v':
        if (s[j] != 'v')
        {
            return 0;
        }
        break;
    case 'w':
        if (s[j] != 'w')
        {
            return 0;
        }
        break;
    case 'x':
        if (s[j] != 'x')
        {
            return 0;
        }
        break;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        int n = strlen(s), flag = 1;
        if (n % 2 == 1)
        {
            int i = n / 2, j = n / 2;
            if (s[i] == 'b' || s[i] == 'd' || s[i] == 'q' || s[i] == 'p')
            {
                flag = 0;
                printf("no\n");
                continue;
            }
            while (s[j] != '\0')
            {
                i--;
                j++;
                if (!judge(i, j))
                {
                    flag = 0;
                    printf("no\n");
                    break;
                }
            }
            if (flag == 1)
            {
                printf("yes\n");
            }
        }
        else
        {
            int i = n / 2 - 1, j = i + 1;
            while (s[j] != '\0')
            {
                if (!judge(i, j))
                {
                    flag = 0;
                    printf("no\n");
                    break;
                }
                i--;
                j++;
            }
            if (flag == 1)
            {
                printf("yes\n");
            }
        }
    }
    return 0;
}