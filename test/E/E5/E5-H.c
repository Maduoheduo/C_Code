#include<stdio.h>
#include<stdlib.h>
#define ll long long
long long S(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3)
{
    return labs(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
}
int main()
{
    int n;  
    scanf("%d",&n);
    getchar();
    ll x1,y1,x2,y2,x3,y3;
    long long sumS=0;
    scanf("(%lld,%lld)",&x1,&y1);
    getchar();
    scanf("(%lld,%lld)",&x2,&y2);
    getchar();
    scanf("(%lld,%lld)",&x3,&y3);
    getchar();
    sumS+=S(x1,y1,x2,y2,x3,y3);
    for(int i=0;i<n-3;i++){
        x2=x3;
        y2=y3;
        scanf("(%lld,%lld)",&x3,&y3);
        getchar();
        sumS+=S(x1,y1,x2,y2,x3,y3);
    }
    if(sumS%2==0){
        printf("%lld.0",sumS/2);
    }else{
        printf("%lld.5",(sumS-1)/2);
    }
    return 0;
}