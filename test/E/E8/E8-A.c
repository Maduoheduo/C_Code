#include <stdio.h>
void output(int n)
{
    switch (n)
    {
    case 0:
        printf("0000 ");
        break;
    case 1:
        printf("0001 ");
        break;
    case 2:
        printf("0010 ");
        break;
    case 3:
        printf("0011 ");
        break;
    case 4:
        printf("0100 ");
        break;
    case 5:
        printf("0101 ");
        break;
    case 6:
        printf("0110 ");
        break;
    case 7:
        printf("0111 ");
        break;
    case 8:
        printf("1000 ");
        break;
    case 9:
        printf("1001 ");
        break;
    case 10:
        printf("1010 ");
        break;
    case 11:
        printf("1011 ");
        break;
    case 12:
        printf("1100 ");
        break;
    case 13:
        printf("1101 ");
        break;
    case 14:
        printf("1110 ");
        break;
    case 15:
        printf("1111 ");
        break;
    }
}
int num[16];
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        getchar();
        getchar();
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int ch;
                if ((ch = getchar()) >= 'a')
                {
                    num[4 * i + j] = ch - 'a' + 10;
                }
                else
                {
                    num[4 * i + j] = ch - '0';
                }
            }
            getchar();
        }
        for (int i = 0; i < 16; i++)
        {
            output(num[i]);
        }
        printf("\n");
    }

    return 0;
}