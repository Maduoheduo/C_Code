#include <stdio.h>
unsigned long long memory[37][37];
unsigned long long f(int x, int y)
{
    if (memory[x][y] != 0)
    {
        return memory[x][y];
    }
    if (x == 0)
    {
        memory[x][y] = f(x + 1, y - 1);
        return f(x + 1, y - 1);
    }
    if (y == 0)
    {
        memory[x][y] = f(x - 1, y);
        return f(x - 1, y);
    }
    memory[x][y] = f(x + 1, y - 1) + f(x - 1, y);
    return f(x + 1, y - 1) + f(x - 1, y);
}
int main()
{
    int n;
    memory[0][0] = 1;
    scanf("%d", &n);
    printf("%lld", f(0, n));
    return 0;
}