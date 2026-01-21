#include<stdio.h>
int main()
{
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    printf("My birthday is %d.",y);
    if(m/10==0){
        printf("0%d.",m);
    }else{
        printf("%d.",m);
    }
    if(d/10==0){
        printf("0");
    }
    printf("%d",d);
    return 0;
}