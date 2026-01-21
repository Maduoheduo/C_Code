#include <stdio.h>
#include <stdlib.h>
int y_descending(const void *pt1, const void *pt2)
{
    if (((double *)pt1)[1] < ((double *)pt2)[1])
        return 1;
    if (((double *)pt1)[1] > ((double *)pt2)[1])
        return -1;
    return 0;
}
int x_ascending(const void *pt1, const void *pt2)
{
    if (((double *)pt1)[0] < ((double *)pt2)[0])
        return -1;
    if (((double *)pt1)[0] > ((double *)pt2)[0])
        return 1;
    return 0;
}
#define LINE 6
#define ROW 2
int main()
{
    double pt[LINE][ROW] = {{1.0, 2.0}, {3.0, 4.0}, {2.5, 9.1}, {3.5, 3.0}, {3.0, 7.0}, {3.5, 2.0}};
    qsort(pt, LINE, ROW * sizeof(double), x_ascending);
    qsort(pt, LINE, ROW * sizeof(double), y_descending);
    for (int i = 0; i < LINE; i++)
        for (int j = 0; j < ROW; j++)
            printf(j == 1 ? "%.1f\n" : "%.1f ", pt[i][j]);
    return 0;
}