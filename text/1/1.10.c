#include<stdio.h>
int main()
{
    int a;
    int sum=0,d=-1,n=-1;
    do{
        scanf("%d",&a);
        n++;
        sum+=a;
        if(a<60){
            d++;
        }
    }while(a!=-1);
    printf("Average:%d\nFailed:%d",(sum+1)/n,d);
    return 0;
}