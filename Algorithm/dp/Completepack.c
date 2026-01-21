#include<stdio.h>//from codefunP3635
long long b[1000][1000];//b[i][j]是指用0，1，……i这几个数拼成j的方案数（不考虑顺序）
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<=n;j++){
        b[0][j]=0;
    }
    for(int i=0;i<=n;i++){
        b[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>j){
                b[i][j]=b[i-1][j];
            }else{
                b[i][j]=b[i-1][j]+b[i][j-i];//把b[i][j]分成两种情况：不含i，即b[i-1][j];含i，我们从每种方案中扣掉一个i，（不保证是否还有i）,总和变成j-i，就相当于b[i][j-i]
            }           
        }   
    }
    printf("%lld",b[n][n]);
    return 0;
}