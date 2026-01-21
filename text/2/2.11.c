#include<stdio.h>
int main()
{
    int a[10],b[10];
    int i;
    double sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        sum+=1.0*a[i]*b[i]/100.0;
    }
    printf("%.2lf",sum);
    return 0;
}