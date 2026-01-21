#include <stdio.h>
#include <string.h>
#define ull unsigned long long
ull n;
// in=0 out=n -->in=0 out=n
ull memory[20][20];
ull stack(ull in, ull input) // input是还未入栈的数字个数
{
    if (memory[in][input] != 0)
    {
        return memory[in][input];
    }
    if (in == 0 && input == 0)
    {
        memory[0][0] = 1;
        return 1;
    }
    if (in == 0)
    {
        memory[in + 1][input - 1] = stack(in + 1, input - 1);
        return stack(in + 1, input - 1);
    }
    if (input == 0)
    {
        memory[in - 1][input] = stack(in - 1, input);
        return stack(in - 1, input);
    }
    return stack(in + 1, input - 1) + stack(in - 1, input);
}
int main()
{
    memset(memory, 0, sizeof(memory));
    scanf("%llu", &n);
    ull ans = stack(0, n);
    printf("%llu", ans);
    return 0;
}