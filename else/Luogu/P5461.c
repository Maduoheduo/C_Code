#include<stdio.h>
int a[1024][1024];
void pardon(int n,int x,int y)
{
    if(n==1){
        a[x][y]=0;
        a[x+1][y]=1;
        a[x][y+1]=1;
        a[x+1][y+1]=1;
        return;
    }
    for(int i=y;i<y+(1<<(n-1));i++){
        for(int j=x;j<x+(1<<(n-1));j++){
            a[i][j]=0;
        }
    }
    pardon(n-1,x+(1<<(n-1)),y);
    pardon(n-1,x,y+(1<<(n-1)));
    pardon(n-1,x+(1<<(n-1)),y+(1<<(n-1)));
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    pardon(n,0,0);
    for(int i=0;i<1<<n;i++){
        for(int j=0;j<1<<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;   
}

