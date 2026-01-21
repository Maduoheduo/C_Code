#include<stdio.h>
#define ll long long
ll time(ll x)
{
    if(x==1){
        return 1;
    }
    return x*time(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld",time(n));
    return 0;
}