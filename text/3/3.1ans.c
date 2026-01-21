//ull的范围是0~2^64-1
//如果a=b=-2^63，会超过ull上界
#include<stdio.h>
#define inf 9223372036854775807ull
#define ninf -9223372036854775808
#define ull unsigned long long
int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    if(a==ninf&&b==ninf){
        printf("NO!\n");
    }else if(a>0&&b>0&&(ull)a+b>inf){
        printf("PO!\n");
    }else if(a<0&&b<0&&(ull)(-a)+(-b)>inf+1){
        printf("NO!\n");
    }else{
        printf("%lld",a+b);
    }
    return 0;
}