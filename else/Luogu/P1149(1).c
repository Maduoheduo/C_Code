// 数组代替函数，空间换时间
#include <stdio.h>
#define size 1000
int num[size];
int a[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
void getnum(int n)
{
    int temp = n, cnt = 0;
    if (temp == 0)
    {
        num[0] = 6;
        return;
    }
    while (temp > 0)
    {
        cnt += a[temp % 10];
        temp /= 10;
    }
    num[n] = cnt;
}
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i <= size; i++)
    {
        getnum(i);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (i + j == k && num[i] + num[j] + num[k] + 4 == n)
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}