#include<stdio.h>
long long gcd(long long a,long long b)
{
    while(b!=0){
        long long hold=b;
        b=a%b;
        a=hold;
    }
    return a;
}
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    printf("%lld",lcm(a,b));
    return 0;
}