#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    int l[n];
    for(int i=0;i<n;i++){
        l[i]=0;
    }
    int p;
    for(int i=0;i<m;i++){
        scanf("%d",&p);
        if(p==n){
            l[p-1]=1-l[p-1];
            l[0]=1-l[0];
            l[p-2]=1-l[p-2];
        }else if(p==1){
            l[p-1]=1-l[p-1];
            l[p]=1-l[p];
            l[n-1]=1-l[n-1];
        }else{
            l[p-1]=1-l[p-1];
            l[p]=1-l[p];
            l[p-2]=1-l[p-2];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",l[i]);
    }
    return 0;
}