#include<stdio.h>
#define ull unsigned long long
ull powmod(ull a,ull b,ull p)
{
    ull ret=1;
    a%=p;
    while(b){
        if(b%2==1){
            ret=(ret*a)%p;
        }
        b>>=1;
        a=a*a%p;
    } 
    return ret;
}
int main()
{
    ull a,b,p;
    scanf("%llu%llu%llu",&a,&b,&p);
    printf("%llu",powmod(a,b,p));
    return 0;
}