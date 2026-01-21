#include <stdio.h>
#include <string.h>
char s[105];
int main()
{
    while (scanf("%s", s) != EOF)
    {
        int n = strlen(s);
        int flag = 0;
        if (s[0] == '<' && s[n - 1] == '>')
        {
            flag = 3;
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] != '=')
                {
                    flag = -1;
                    break;
                }
            }
        }
        else if (s[0] == '<')
        {
            flag = 1;
            for (int i = 1; i < n; i++)
            {
                if (s[i] != '=')
                {
                    flag = -1;
                    break;
                }
            }
        }
        else if (s[0] == '=')
        {
            if (s[n - 1] == '>')
            {
                flag = 2;
            }
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] != '=')
                {
                    flag = -1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            printf("Left Arrow\n");
        }
        else if (flag == 2)
        {
            printf("Right Arrow\n");
        }
        else if (flag == 3)
        {
            printf("Bidirectional Arrow\n");
        }
        else
        {
            printf("Not an Arrow\n");
        }
    }
    return 0;
}