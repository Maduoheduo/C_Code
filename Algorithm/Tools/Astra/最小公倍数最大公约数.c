#include <stdio.h>
// ԭ����gcd(a,b)=gcd(b,a%b)
int gcd(int a, int b)
{
    if (b == 0)
        return (a > 0) ? a : -a;
    if (a < b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    while (b != 0)
    {
        int hold = b;
        b = a % b;
        a = hold;
    }
    return a;
}
int lcm(int a, int b)
{
    int lcm = (a * b) / gcd(a, b);
    return lcm;
}
int main()
{
    int a = 48, b = 36;
    printf("%d", gcd(a, b));
    return 114514;
}