#include<stdio.h>
#define len 10005
int sheep[len];
void ArrayInit(int a[],int n,int k)
{
    for(int i=1;i<=n;i++){
        a[i]=k;
    }
}
int main()
{
    int n,k;
    int cnt=0;
    scanf("%d%d",&n,&k);
    int sheeps=n;
    int idx=n-2;
    ArrayInit(sheep,len,-1);
    ArrayInit(sheep,n,0);
    while(sheeps>1){
        cnt=0;
        while(cnt<k){
            idx=idx%n+1;
            if(sheep[idx]==0){
                cnt++;
            }
        }
        sheep[idx]=1;
        sheeps--;
    }
    for(int i=1;i<=n;i++){
        if(sheep[i]==0){
            printf("%d",i);
        }
    }
    return 0;
}