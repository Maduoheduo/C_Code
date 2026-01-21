#include <stdio.h>
#include <string.h>
#include <ctype.h>
int alpha[26];
char s[405][51];
int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
        {
            alpha[ch - 'A']++;
        }
    }
    int h = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > h)
        {
            h = alpha[i];
        }
    }
    int index = 0;
    for (int j = 0; j < 51; j++)
    {
        if (j % 2 == 1)
        {
            s[0][j] = ' ';
        }
        else
        {
            s[0][j] = 'A' + index;
            index++;
        }
    }
    index = 0;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < 51; j++)
        {
            if (j % 2 == 1)
            {
                s[i][j] = ' ';
            }
            else
            {
                if (alpha[index] >= i)
                {
                    s[i][j] = '*';
                }
                else
                {
                    s[i][j] = ' ';
                }
                index++;
            }
        }
        index = 0;
    }
    for (int i = h; i >= 0; i--)
    {
        for (int j = 0; j < 51; j++)
        {
            putchar(s[i][j]);
        }
        printf("\n");
    }
    return 0;
}