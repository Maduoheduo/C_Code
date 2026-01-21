#include<stdio.h>
#define inf -1e9//设置一个无穷小，防止与求和混淆？？？？？
int max(int a,int b);
int a[1005];
int dp[1005][1005];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=inf;
        }
    }
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        dp[i][0]=0;
        for(int j=1;j<=k;j++){
            if(i>=j){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]+a[i-1]);
            }else{
                continue;
            }
        }
    }
    printf("%d",dp[n][k]);
    return 0;
}
int max(int a,int b)
{
    int c;
    if(a>b){
        c=a;
    }else{
        c=b;
    }
    return c;
}