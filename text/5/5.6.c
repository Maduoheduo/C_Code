#include<stdio.h>
#define ll unsigned long long
ll gcd(ll a,ll b)
{
    if(a<b){
        ll temp=b;
        b=a;
        a=temp;
    }
    while(b!=0){
        int hold=b;
        b=a%b;
        a=hold;
    }
    return a;
}
ll lcm(ll a,ll b)
{
    ll lcm=(a*b)/gcd(a,b);
    return lcm;
}
int main()
{
    ll a,b;
    scanf("%llu%llu",&a,&b);
    printf("%llu",lcm(a,b));
    return 0;
}