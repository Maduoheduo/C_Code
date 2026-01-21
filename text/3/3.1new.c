#include<stdio.h>
#define ul 9223372036854775807LL
#define ll -9223372036854775808LL

int main()
{
    long long a,b; 
    scanf("%lld%lld",&a,&b);
    if(a>0&&b>0&&b>ul-a){
        printf("PO!");
    }else if(a<0&&b<0&&b<ll-a){
        printf("NO!");
    }else{
        printf("%lld",a+b);
    }
    return 0;
}  