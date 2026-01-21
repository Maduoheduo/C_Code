#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    int a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a=(i+j)*i*j;
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}