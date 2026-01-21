#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int neu[n],drop;
    for(int i=0;i<n;i++){
        scanf("%d",&neu[i]);
    }
    for(int i=0;i<k;i++){
        scanf("%d",&drop);
        neu[drop-1]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",neu[i]);
    }
    return 0;
}