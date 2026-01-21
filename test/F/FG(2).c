#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define eps 1e-8
#define size 3000000
int equal(double a, double b)
{
    if (fabs(a - b) < eps)
    {
        return 1;
    }
    return 0;
}
//
int a1[size][2], a2[size][2], a3[size][2], a4[size][2], a5[size][2], a6[size][2], a7[size][2], a8[size][2];
int num1[size], num2[size], num3[size], num4[size], num5[size], num6[size], num7[size], num8[size];
double k1[size], k2[size], k3[size], k4[size];
int cmp1(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (equal(k1[i], k1[j]))
    {
        if (a1[i][0] < a1[j][0])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (k1[i] < k1[j])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int cmp2(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (equal(k2[i], k2[j]))
    {
        if (a2[i][0] < a2[j][0])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (k2[i] < k2[j])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int cmp3(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (equal(k3[i], k3[j]))
    {
        if (a3[i][0] < a3[j][0])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (k3[i] < k3[j])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int cmp4(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (equal(k4[i], k4[j]))
    {
        if (a4[i][0] < a4[j][0])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (k4[i] < k4[j])
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int cmp5(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (a5[i][0] < a5[j][0])
    {
        return -1;
    }
    else
    {
        return 1;
    }
    return 0;
}
int cmp6(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (a6[i][1] < a6[j][1])
    {
        return -1;
    }
    else
    {
        return 1;
    }
    return 0;
}
int cmp7(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (a7[i][0] > a7[j][0])
    {
        return -1;
    }
    else
    {
        return 1;
    }
    return 0;
}
int cmp8(const void *e1, const void *e2)
{
    int i = *(int *)e1, j = *(int *)e2;
    if (a8[i][1] > a8[j][1])
    {
        return -1;
    }
    else
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (y == 0 && x > 0)
        {
            a5[i5][0] = x, a5[i5][1] = y;
            num5[i5] = i5;
            i5++;
        }
        else if (x == 0 && y > 0)
        {
            a6[i6][0] = x, a6[i6][1] = y;
            num6[i6] = i6;
            i6++;
        }
        else if (y == 0 && x < 0)
        {
            a7[i7][0] = x, a7[i7][1] = y;
            num7[i7] = i7;
            i7++;
        }
        else if (x == 0 && y < 0)
        {
            a8[i8][0] = x, a8[i8][1] = y;
            num8[i8] = i8;
            i8++;
        }
        else if (x > 0 && y > 0)
        {
            a1[i1][0] = x, a1[i1][1] = y;
            k1[i1] = (double)y / (double)x;
            num1[i1] = i1;
            i1++;
        }
        else if (x < 0 && y > 0)
        {
            a2[i2][0] = x, a2[i2][1] = y;
            k2[i2] = (double)y / (double)x;
            num2[i2] = i2;
            i2++;
        }
        else if (x < 0 && y < 0)
        {
            a3[i3][0] = x, a3[i3][1] = y;
            k3[i3] = (double)y / (double)x;
            num3[i3] = i3;
            i3++;
        }
        else if (x > 0 && y < 0)
        {
            a4[i4][0] = x, a4[i4][1] = y;
            k4[i4] = (double)y / (double)x;
            num4[i4] = i4;
            i4++;
        }
    }
    qsort(num1, i1, sizeof(int), cmp1);
    qsort(num2, i2, sizeof(int), cmp2);
    qsort(num3, i3, sizeof(int), cmp3);
    qsort(num4, i4, sizeof(int), cmp4);
    qsort(num5, i5, sizeof(int), cmp5);
    qsort(num6, i6, sizeof(int), cmp6);
    qsort(num7, i7, sizeof(int), cmp7);
    qsort(num8, i8, sizeof(int), cmp8);
    for (int i = 0; i < i5; i++)
    {
        printf("(%d, %d)\n", a5[num5[i]][0], a5[num5[i]][1]);
    }
    for (int i = 0; i < i1; i++)
    {
        printf("(%d, %d)\n", a1[num1[i]][0], a1[num1[i]][1]);
    }
    for (int i = 0; i < i6; i++)
    {
        printf("(%d, %d)\n", a6[num6[i]][0], a6[num6[i]][1]);
    }
    for (int i = 0; i < i2; i++)
    {
        printf("(%d, %d)\n", a2[num2[i]][0], a2[num2[i]][1]);
    }
    for (int i = 0; i < i7; i++)
    {
        printf("(%d, %d)\n", a7[num7[i]][0], a7[num7[i]][1]);
    }
    for (int i = 0; i < i3; i++)
    {
        printf("(%d, %d)\n", a3[num3[i]][0], a3[num3[i]][1]);
    }
    for (int i = 0; i < i8; i++)
    {
        printf("(%d, %d)\n", a8[num8[i]][0], a8[num8[i]][1]);
    }
    for (int i = 0; i < i4; i++)
    {
        printf("(%d, %d)\n", a4[num4[i]][0], a4[num4[i]][1]);
    }
    return 0;
}