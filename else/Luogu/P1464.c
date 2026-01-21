// 记忆化搜索，动态维护整个数组
#include <stdio.h>
#define ll long long
ll memory[25][25][25];
void fill(ll a, ll b, ll c);
ll w(ll a, ll b, ll c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    if ((a <= 20 && b <= 20 && c <= 20) && memory[a][b][c] != 0)
    {
        return memory[a][b][c];
    }
    if (a > 20 || b > 20 || c > 20)
    {
        fill(20, 20, 20);
        return memory[20][20][20];
    }
    if (a < b && b < c)
    {
        fill(a, b, c - 1);
        fill(a, b - 1, c - 1);
        fill(a, b - 1, c);
        if (a <= 20 && b <= 20 && c <= 20)
        {
            memory[a][b][c] = memory[a][b][c - 1] + memory[a][b - 1][c - 1] - memory[a][b - 1][c];
        }
        return memory[a][b][c];
    }
    if (a <= 20 && b <= 20 && c <= 20)
    {
        fill(a - 1, b, c);
        fill(a - 1, b - 1, c);
        fill(a - 1, b, c - 1);
        fill(a - 1, b - 1, c - 1);
        memory[a][b][c] = memory[a - 1][b][c] + memory[a - 1][b - 1][c] + memory[a - 1][b][c - 1] - memory[a - 1][b - 1][c - 1];
    }
    return memory[a][b][c];
}
void fill(ll a, ll b, ll c)
{
    if (memory[a][b][c] != 0)
    {
        return;
    }
    memory[a][b][c] = w(a, b, c);
}
int main()
{
    ll a, b, c;
    while (!(a == -1 && b == -1 && c == -1))
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if (a == -1 && b == -1 && c == -1)
            break;
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
    }
    return 0;
}