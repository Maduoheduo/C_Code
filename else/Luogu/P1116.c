#include <stdio.h>
int cnt = 0;
int a[10005];
void swap(int *i, int *j)
{
    int c = *i;
    *i = *j;
    *j = c;
}
void bubblesort(int a[], int n)
{
    int swapflag;
    for (int i = 1; i < n; i++)
    {
        swapflag = 0;
        for (int j = 0; j < n - i; j++)
        { // ÿ��jѭ�����һ����Σ���ֵ������ĩβ
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                cnt++;
                swapflag = 1;
            }
        }
        if (swapflag == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubblesort(a, n);
    printf("%d", cnt);
    return 0;
}