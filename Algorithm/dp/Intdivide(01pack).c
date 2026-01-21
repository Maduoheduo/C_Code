#include<stdio.h>
long long dp[1000][1000];
int main()
{
    int n;
    scanf("%d",&n);
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-i];
            }
        }
    }
    printf("%lld",dp[n][n]);
    return 0;   
}