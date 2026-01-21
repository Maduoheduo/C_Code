#include<stdio.h>
long long b[1000];//空间优化：计算b[i+1][j]前，可认为这一行前面j-1个元素是从上一行来的（一样的），这样只要在一行上不断更新即可
                  //b[i][j]自身加上本行前面对应元素（也就是下一行同列元素），就是b[i+1][j]。令j不断增加，最终整一行都更新为下一行
int main()
{
    int n;
    scanf("%d",&n);
    b[0]=1;
    for(int i=1;i<=1;i++){
        b[i]=0;
    }//初始化
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){//从第i个开始优化
            b[j]+=b[j-i];
        }
    }
    printf("%lld",b[n]);
    return 0;
}