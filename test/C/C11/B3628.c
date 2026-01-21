#include <stdio.h>
int main()
{
    int n, min = 0, life = 0, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        life += a;
        if (life < min)
        {
            min = life;
        }
    }
    printf("%d", (-1) * min + 1);
    return 0;
}