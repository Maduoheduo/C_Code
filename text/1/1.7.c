#include<stdio.h>
int main()
{
    int x,a;
    scanf("%d%d",&x,&a);
    if(x<=a){
        printf("%d\n",a-x);
        if(x==a){
            printf("Indifferentiable Point");
        }
    }else{
        printf("0");
    }
    return 0;
}