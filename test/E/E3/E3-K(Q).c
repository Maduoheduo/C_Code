#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    long long up_quo,down_quo;
    if(b!=0){
        if(a%b==0){
            up_quo=down_quo=a/b;
        }else if(a*b>0){
            down_quo=a/b;
            up_quo=down_quo+1;
        }else if(a*b<0){
            up_quo=a/b;
            down_quo=up_quo-1;
        }
        printf("%lld %lld",down_quo,up_quo);
    }   
    return 0;
}