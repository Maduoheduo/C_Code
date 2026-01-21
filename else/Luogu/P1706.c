#include <stdio.h>
int next_permutation(int j[], int n) // 另一半，用这个
{
    int l = n - 2, r;
    while (l >= 0 && j[l] >= j[l + 1])
    {
        l--;
    }
    if (l < 0)
        return 0;
    for (r = n - 1; j[r] <= j[l]; r--)
        ;
    int tmp = j[l];
    j[l] = j[r];
    j[r] = tmp;
    l += 1;
    r = n - 1;
    while (l < r)
    {
        tmp = j[l];
        j[l] = j[r];
        j[r] = tmp;
        l++;
        r--;
    }
    return 1;
}
int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // 注意0~9的初始情况不会遍历到，要特判！
    {
        printf("%5d", num[i]);
    }
    printf("\n");
    while (next_permutation(num, n))
    {
        for (int i = 0; i < n; i++)
        {
            printf("%5d", num[i]);
        }
        printf("\n");
    }
    return 0;
}