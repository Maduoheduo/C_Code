#include<stdio.h>
long long b[2][1000];//空间优化：每行计算只要依赖上一行与本行
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<=n;j++){
        b[0][j]=0;
    }
    for(int i=0;i<=1;i++){
        b[i][0]=1;
    }//初始化
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>j){
                b[1][j]=b[0][j];
            }else{
                b[1][j]=b[0][j]+b[1][j-i];
            }
        }
        for(int j=0;j<=n;j++){
            b[0][j]=b[1][j];//把第一行转移到第零行
        }     
    }
    printf("%lld",b[1][n]);
    return 0;
}