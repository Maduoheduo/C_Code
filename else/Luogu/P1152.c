#include <stdio.h>
#include <stdlib.h>
// 正解：对差值排序，再检验是否含1~n-1的所有数（第i位是否等于i）
int a[1005];
int minus[1000005]; // 有风险
int main()
{
    int n, max = -1e8, min = 1e8;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        minus[abs(a[i] - a[i - 1])] = 1;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        if (minus[i] == 0)
        {
            flag = 0;
            printf("Not jolly\n");
            break;
        }
    }
    if (flag == 1)
    {
        printf("Jolly\n");
    }
    return 0;
}