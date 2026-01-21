#include<stdio.h>
#define mod 998244353ll
long long res[7500005];
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(n=0;n<7500001;n++){
        res[n]=1;
    }
    for(n=0;n<7500000;n++){
        res[n]%=mod;
        res[n+1]=res[n]*(n+2);
    }
    while(t--){
        scanf("%d",&n);
        printf("%lld\n",res[n-1]);
    }
    return 0;
}