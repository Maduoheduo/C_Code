#include<stdio.h>
#define ul 9223372036854775807LL
#define ll -9223372036854775807LL
int main()
{
    long long a,b;
    unsigned long long m;
    scanf("%lld%lld",&a,&b);
    if(a==ll-1&&b==ll-1){//为什么ll=-9223372036854775808时会报超范围？
        printf("-36893488147419103232");
    }else if(a>0&&b>0&&a>ul-b){
        m=a+b;
        printf("%lld",m);
    }else if(a<0&&b<0&&a<ll-b-1){
        m=-a-b;
        printf("-%lld",m);
    }else{
        printf("%lld",a+b);
    }
    return 0;
}