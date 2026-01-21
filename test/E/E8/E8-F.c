#include <stdio.h>
#include <string.h>
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char s[30], s1[5], s2[5], s3[10];
int get(char f[])
{
    int ret = 0, n = strlen(f);
    for (int i = 0; i < n; i++)
    {
        ret *= 10;
        ret += f[i] - '0';
    }
    return ret;
}
/*int next_permutation(int j[], int n)
{
    int l, r;
    for (l = n - 2; l >= 0 && j[l] >= j[l + 1]; l--)
        ;
    if (l < 0)
        return 0;
    for (r = n - 1; j[r] <= j[l]; r--)
        ;
    int tmp = j[l];
    j[l] = j[r];
    j[r] = tmp;
    for (l++, r = n - 1; l < r; l++, r--)
    {
        tmp = j[l];
        j[l] = j[r];
        j[r] = tmp;
    }
    return 1;
}*/
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
int basenum(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}
int change(int n, int k)
{
    int ret = 0;
    int c[k];
    for (int i = k - 1; i >= 0; i--)
    {
        c[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < k; i++)
    {
        c[i] = num[c[i]];
    }
    for (int i = 0; i < k; i++)
    {
        ret *= 10;
        ret += c[i];
    }
    return ret;
}
int main()
{
    int a, b;
    long long c;
    gets(s);
    int i = strlen(s);
    for (int j = 0; j < 5; j++)
    {
        s1[j] = s[j];
    }
    for (int j = 0; j < 5; j++)
    {
        s2[j] = s[j + 8];
    }
    for (int j = 0; j + 16 < i; j++)
    {
        s3[j] = s[j + 16];
    }
    a = get(s1);
    b = get(s2);
    c = get(s3);
    int bases = basenum(c);
    int flag = 0;
    while (flag == 0)
    {
        if (change(a, 5) * change(b, 5) == change(c, bases))
        {
            int a1 = change(a, 5), b1 = change(b, 5);
            long long c1 = a1 * b1;
            flag = 1;
            printf("%d * %d = %lld", a1, b1, c1);
        }
        else
        {
            next_permutation(num, 10);
        }
    }
    return 0;
}