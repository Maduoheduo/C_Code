#include<stdio.h>
long long dp[1005];
int main()
{   
    int n;
    scanf("%d",&n);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            dp[i]+=dp[j];
        }
    }
    printf("%lld",dp[n]);
    return 0;
}