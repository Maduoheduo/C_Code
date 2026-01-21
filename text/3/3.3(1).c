#include<stdio.h>
#define ul 9223372036854775807LL
#define ll -9223372036854775808LL
int main()
{
    long long a,b;
    unsigned long long sum;
    scanf("%lld%lld",&a,&b);
    if(a==ll&&b==ll){
        printf("-18446744073709551616");
    }else if(a>ul-b&&a>0&&b>0){
        sum=a+b;
        printf("%llu",sum);
    }else if(a<0&&b<0&&a<ll-b){
        sum=(-a)+(-b);
        printf("-%llu",sum);
    }else{
        printf("%lld",a+b);
    }

    return 0;
}