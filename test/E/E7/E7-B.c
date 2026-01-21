#include <stdio.h>
#define ll long long
ll a[1005];
void swap(ll *p, ll *q)
{
    ll s;
    s = *p;
    *p = *q;
    *q = s;
}
int compare(long long a, long long b)
{
    return a - b;
}

void stoogeSort(long long array[], int arraySize)
{
    if (compare(array[0], array[arraySize - 1]) > 0)
    {
        swap(&array[0], &array[arraySize - 1]); // TODO
    }
    if (arraySize >= 3)
    {
        int third = arraySize / 3;
        stoogeSort(array, arraySize - third);
        stoogeSort(array + third, arraySize - third);
        stoogeSort(array, arraySize - third);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    stoogeSort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }
    return 0;
}