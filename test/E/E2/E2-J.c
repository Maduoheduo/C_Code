#include<stdio.h>
#define mod 998244353
int main()
{
    int n;
    scanf("%d",&n);
    long long cnt[n+10];
    cnt[2]=6;
    cnt[3]=10;
    for(int i=3;i<n;i++){
        cnt[i+1]=(cnt[i]+cnt[i-1])%mod;
    }
    printf("%llu",cnt[n]);
    return 0;
}