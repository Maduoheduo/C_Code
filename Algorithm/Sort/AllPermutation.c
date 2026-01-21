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