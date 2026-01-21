#include<stdio.h>
int x[25];
int main()
{
    int n;
    int max=0,min=105,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]>max){
            max=x[i];
        }
        if(x[i]<min){
            min=x[i];
        }
        sum+=x[i];
    }
    sum-=(min+max);    
    int result[3];
    int quotient=sum/(n-2);
    int remainder=sum%(n-2);
    for(int i=0;i<=2;i++){
        remainder*=10;
        result[i]=remainder/(n-2);
        remainder%=(n-2);
    }
    printf("%d.",quotient);
    for(int i=0;i<2;i++){
        printf("%d",result[i]);
    }
    return 0;
}