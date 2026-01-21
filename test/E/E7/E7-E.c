#include <stdio.h>
int a[9][9];
int b[9];
int next_permutation(int j[], int n)
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
}
int couter_sequence(int j[], int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i + 1; k <= n; k++)
        {
            if (j[i] > j[k])
            {
                cnt++;
            }
        }
    }
    if (cnt % 2 == 1)
    {
        return -1;
    }
    return 1;
}
int main()
{
    int n, Sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        b[i] = i;
    }
    do
    {
        int sum = 1;
        for (int i = 1; i <= n; i++)
        {
            sum *= a[i][b[i]];
        }
        sum *= couter_sequence(b, n);
        Sum += sum;
    } while (next_permutation(b, n));
    printf("%d", Sum);
    return 0;
}