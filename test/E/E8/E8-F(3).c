#include <stdio.h>
#include <string.h>
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char s[40], sa[6], sb[6], sc[11];
char s1[6], s2[6], s3[11];
long long ctoi(char s[])
{
    long long ret = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        ret *= 10;
        ret += s[i] - '0';
        i++;
    }
    return ret;
}
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
}

// 改动 从1-n变成0-（n-1）
void shoot(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        a[i] = num[a[i] - '0'] + '0';
    }
}
int main()
{
    long long a, b, c;
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
    strcpy(s1, sa); // 备份
    strcpy(s2, sb);
    strcpy(s3, sc);
    while (next_permutation(num, 10))
    {
        strcpy(sa, s1);
        strcpy(sb, s2);
        strcpy(sc, s3);
        shoot(sa);
        if (sa[0] != '0')
        {
            a = ctoi(sa);
        }
        else
        {
            continue;
        }
        shoot(sb);
        if (sb[0] != '0')
        {
            b = ctoi(sb);
        }
        else
        {
            continue;
        }
        shoot(sc);
        if (sc[0] != '0')
        {
            c = ctoi(sc);
        }
        else
        {
            continue;
        }
        if (a * b == c)
        {
            printf("%lld * %lld = %lld", a, b, c);
            break;
        }
    }
    return 0;
}
