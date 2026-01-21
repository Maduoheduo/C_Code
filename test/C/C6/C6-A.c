#include<stdio.h>
#define len 2005
double a[len];
void swap(double *i,double *j)
{
    double c=*i;
    *i=*j;
    *j=c;
}
void bubblesort(double a[],int n)
{
    int swapflag;
    for(int i=1;i<n;i++){
        swapflag=0;
        for(int j=0;j<n-i;j++){//每次j循环会放一个最（次）大值到数组末尾
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                swapflag=1;
            }
        }
        if(swapflag==0){
            break;
        }        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    bubblesort(a,n);
    for(int i=0;i<n;i++){
        printf("%.4lf ",a[i]);
    }
    return 0;
}