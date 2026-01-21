#include<stdio.h>
unsigned long long dp[1000][1000];
unsigned long long C(int n,int k)
{
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                dp[i][j]=1; 
            }else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
    }
    return dp[n][k];
}
int main()
{
    long long n,k,L;
    scanf("%lld%lld%lld",&n,&k,&L);
    long long result;
    if(n<=(k-1)*(L-1)){
        result=0;
    }else{
        result=C(n-(k-1)*(L-1),k);
    }
    printf("%lld",result);
    return 0;
}