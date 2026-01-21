#include <stdio.h>
#include <ctype.h>
int W11[6000], L11[6000], W21[3200], L21[3200];
int check11(int w11, int l11)
{
    if (w11 >= 11 && w11 - l11 >= 2)
    {
        return 1;
    }
    if (l11 >= 11 && l11 - w11 >= 2)
    {
        return 1;
    }
    return 0;
}
int check21(int w21, int l21)
{
    if (w21 >= 21 && w21 - l21 >= 2)
    {
        return 1;
    }
    if (l21 >= 21 && l21 - w21 >= 2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int w11 = 0, l11 = 0, w21 = 0, l21 = 0;
    int index11 = 0, index21 = 0;
    char ch;
    while ((ch = getchar()) != 'E')
    {
        if (isupper(ch))
        {
            if (ch == 'W')
            {
                w11++;
                w21++;
            }
            else
            {
                l11++;
                l21++;
            }
        }
        if (check11(w11, l11))
        {
            W11[index11] = w11;
            L11[index11] = l11;
            w11 = 0;
            l11 = 0;
            index11++;
        }
        if (check21(w21, l21))
        {
            W21[index21] = w21;
            L21[index21] = l21;
            w21 = 0;
            l21 = 0;
            index21++;
        }
    }
    W11[index11] = w11;
    L11[index11] = l11;
    W21[index21] = w21;
    L21[index21] = l21;
    for (int i = 0; i <= index11; i++)
    {
        printf("%d:%d\n", W11[i], L11[i]);
    }
    printf("\n");
    for (int i = 0; i <= index21; i++)
    {
        printf("%d:%d\n", W21[i], L21[i]);
    }
    return 0;
}