#include <stdio.h>
/*int next_permutation(int j[], int n)
{
    int l, r;
    for (l = n - 1; l > 0 && j[l] > j[l + 1]; l--)
        ;
    if (l == 0)
        return 0;
    for (r = n; j[r] < j[l]; r--)
        ;
    int tmp = j[l];
    j[l] = j[r];
    j[r] = tmp;
    for (l++, r = n; l < r; l++, r--)
    {
        tmp = j[l];
        j[l] = j[r];
        j[r] = tmp;
    }
    return 1;
}*/
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
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int main()
{
    for (int i = 0; i < 10; i++) // 注意0~9的初始情况不会遍历到，要特判！
    {
        printf("%d ", num[i]);
    }
    while (next_permutation(num, 10))
    {
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", num[i]);
        }
        printf("\n");
    }
    return 0;
}