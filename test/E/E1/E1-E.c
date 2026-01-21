#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(m==0){
        printf("%d",n);
    }else{
        printf("%d",n%m);
    }
    return 0;
}