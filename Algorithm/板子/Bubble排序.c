#include <stdio.h>
#include <stdlib.h>

void maopao(int a[], int n) // 升序
{
    int temp, aa = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        aa = 0;
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                aa = 1;
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
        if (aa == 0)
            break;
    }
}

void maopao1(int a[], int n) // 降序
{
    int temp, aa = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        aa = 0;
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j + 1];
                aa = 1;
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
        if (aa == 0)
            break;
    }
}

int main()
{
    int n;
    int a[1002] = {0};
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    maopao(a + 1, i);
    for (i = 0; i < n; ++i)
    {
        printf("%d", a[i]);
    }
}