#include <stdio.h>
#include <stdlib.h>
int next_permutation(int j[], int n)
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
int s[3];
void getnum(int i)
{
    for (int j = 0; j < 3; j++)
    {
        s[i] *= 10;
        s[i] += num[i * 3 + j];
    }
    return;
}
int main()
{
    int a, b, c;
    int cnt = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 0; i < 3; i++)
    {
        s[i] = 0;
        getnum(i);
    }
    if (s[0] * b == s[1] * a && s[1] * c == s[2] * b)
    {
        printf("%d %d %d\n", s[0], s[1], s[2]);
        cnt++;
    }
    while (next_permutation(num, 9))
    {
        for (int i = 0; i < 3; i++)
        {
            s[i] = 0;
            getnum(i);
        }
        if (s[0] * b == s[1] * a && s[1] * c == s[2] * b)
        {
            printf("%d %d %d\n", s[0], s[1], s[2]);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("No!!!");
    }
    return 0;
}