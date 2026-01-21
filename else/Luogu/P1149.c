#include <stdio.h>
int a[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        for (int i1 = 0; i1 < 10; i1++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int j1 = 0; j1 < 10; j1++)
                {
                    for (int k = 0; k < 10; k++)
                    {
                        for (int k1 = 0; k1 < 10; k1++)
                        {
                            int ai1, aj1, ak1;
                            if (i1 == 0)
                            {
                                ai1 = 0;
                            }
                            else
                            {
                                ai1 = a[i1];
                            }
                            if (j1 == 0)
                            {
                                aj1 = 0;
                            }
                            else
                            {
                                aj1 = a[j1];
                            }
                            if (k1 == 0)
                            {
                                ak1 = 0;
                            }
                            else
                            {
                                ak1 = a[k1];
                            }
                            if (i1 * 10 + i + j1 * 10 + j == k1 * 10 + k && a[i] + ai1 + a[j] + aj1 + a[k] + ak1 == n - 4)
                            {
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}