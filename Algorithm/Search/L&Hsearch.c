// 升序数组中第一个大于等于key的数组索引(左起)
int lower_search_l(int a[], int l, int r, int key) // l取0，r取n-1
{
    if (key > a[r])
        return r + 1;
    int mi = 0;
    while (l < r)
    {
        mi = (l + r) >> 1;
        if (a[mi] < key)
            l = mi + 1;
        else
            r = mi;
    }
    return l;
}
// 若要精确查找右起第一个出现的key值(找不到返回-1)
int lower_search_r(int a[], int l, int r, int key)
{
    int pos = -1;
    if (key > a[r] || key < a[l])
    {
        return -1;
    }
    int mi = 0;
    while (l <= r)
    {
        mi = l + ((r - l) >> 1);
        if (a[mi] < key)
        {
            l = mi + 1;
        }
        else if (a[mi] == key)
        {
            pos = mi;
            l = mi + 1; // 区别在这里
        }
        else
        {
            r = mi - 1;
        }
    }
    return pos;
}
int upper_search_(int a[], int lo, int hi, int val)
{
    if (val <= a[hi])
        return hi + 1;
    int mi = 0;
    while (lo < hi)
    {
        mi = (lo + hi) >> 1;
        if (a[mi] >= val)
            lo = mi + 1;
        else
            hi = mi;
    }
    return lo;
}