#include <stdio.h>
#define size 10
char s[size][size];
int obstacle(int i, int j, int w)
{
    switch (w)
    {
    case 0:
        if (i == 0 || s[i - 1][j] == '*')
        {
            return 1;
        }
        break;
    case 1: // east
        if (j == size - 1 || s[i][j + 1] == '*')
        {
            return 1;
        }
        break;
    case 2: // south
        if (i == size - 1 || s[i + 1][j] == '*')
        {
            return 1;
        }
        break;
    case 3: // west
        if (j == 0 || s[i][j - 1] == '*')
        {
            return 1;
        }
        break;
    }
    return 0;
}
int move(int *i, int *j, int w)
{ // return w
    if (obstacle(*i, *j, w) == 1)
    {
        w = (w + 1) % 4;
    }
    else
    {
        switch (w)
        {
        case 0:
            (*i)--;
            break;
        case 1: // east
            (*j)++;
            break;
        case 2: // south
            (*i)++;
            break;
        case 3: // west
            (*j)--;
            break;
        }
    }
    return w;
}
int catch(int i1, int j1, int i2, int j2)
{
    if (i1 == i2 && j1 == j2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int ci, cj, fi, fj, wc = 0, wf = 0; // 0代表北,顺时针递增
    int ci0, cj0, fi0, fj0, time = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", s[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == 'F')
            {
                fi = i;
                fj = j;
                s[i][j] = '.';
            }
            if (s[i][j] == 'C')
            {
                ci = i;
                cj = j;
                s[i][j] = '.';
            }
        }
    }
    fi0 = fi;
    fj0 = fj;
    ci0 = ci;
    cj0 = cj;
    int *Fi = &fi, *Fj = &fj, *Ci = &ci, *Cj = &cj;
    while (catch(fi, fj, ci, cj) == 0)
    {
        time++;
        wf = move(Fi, Fj, wf);
        wc = move(Ci, Cj, wc);
        if ((fi == fi0 && fj == fj0 && ci == ci0 && cj == cj0 && wf == 0 && wc == 0) || time > 10000000)
        {
            time = 0;
            break;
        }
    }
    printf("%d", time);
    return 0;
}
// 边界处理
// 人所在格子按空地处理
// 何时可判定永不相遇(!!!)
// 注意上下颠倒