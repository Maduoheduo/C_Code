#include <stdio.h>
#include <string.h>
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char s[40], sa[6], sb[6], sc[11];
char s1[6], s2[6], s3[11];
int next_permutation(int j[], int n)
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
} // 改动 从1-n变成0-（n-1）
int ctoi(char a[])
{
    int ret = 0;
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        ret *= 10;
        ret += a[i] - '0';
    }
    return ret;
}
long long shoot(char a[])
{
    long long ret = 0;
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        ret *= 10;
        ret += num[a[i] - '0'];
    }
    return ret;
}
int zero(char s[])
{
    if (num[s[0] - '0'] == 0)
        return 1;
    return 0;
}
int main()
{
    int a, b;
    long long c;
    gets(s);
    int i = strlen(s);
    for (int j = 0; j < 5; j++)
    {
        sa[j] = s[j];
    }
    sa[5] = '\0';
    for (int j = 0; j < 5; j++)
    {
        sb[j] = s[j + 8];
    }
    sb[5] = '\0';
    int j;
    for (j = 0; j + 16 < i; j++)
    {
        sc[j] = s[j + 16];
    }
    sc[j] = '\0';
    strcpy(s1, sa);
    strcpy(s2, sb);
    strcpy(s3, sc);
    a = ctoi(sa);
    b = ctoi(sb);
    c = ctoi(sc);
    while (a * b != c)
    {
        next_permutation(num, 10);
        if (zero(s1) || zero(s2) || zero(s3))
        {
            continue;
        }
        a = shoot(s1);
        b = shoot(s2);
        c = shoot(s3);
    }
    printf("%d * %d = %lld", a, b, (long long)a * (long long)b);
    return 0;
}