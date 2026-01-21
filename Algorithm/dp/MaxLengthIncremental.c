#include<stdio.h>//求一个数列中最长的子序列
#define N 5
int a[N]={1,5,2,4,3};
int max(int a[],int i,int n)//a[i]之后的最大数
{
    int max=a[i];
    for(int j=i+1;j<n;j++){
        if(a[j]>max){
            max=a[j];
        }
    }
    return max;
}
int L[N]={0};
int main()
{
    for(int i=N-1;i>=0;i--){
        if(max(a,i,N)>a[i]){//a[i]能与后面的数构成递增子序列，那么就进入迭代
            L[i]=max(L,i,N)+1;//思考为什么不能用i
        }else{
            L[i]=1;
        }
    }
    int i;
    scanf("%d",&i);
    printf("%d",L[i]);
    return 0;
}