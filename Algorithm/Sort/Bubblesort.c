#include<stdio.h>
#define len 10
void swap(int *i,int *j)
{
    int c=*i;
    *i=*j;
    *j=c;
}
void bubblesort(int a[],int n)
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
int a[len];
int main()
{
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    bubblesort(a,len);
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    return 0;
}