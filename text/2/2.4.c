#include<stdio.h>
int main()
{
    long long a;
    long long s=0,n=0;
    while(scanf("%lld",&a)!=EOF){
        n++;
        if(a%2==0){
            s+=a*a*a;
        }else{
            s-=a*a*a;
        }
    }
    if(n==1){
        if(a%2==0){
            printf("%lld",a*a*a);
        }else{
            printf("%lld",-a*a*a);
        }
    }else{
        printf("%lld",s);
    }
    return 0;
}