#include<stdio.h>
void swap(int *i,int *j)
{
    int save=*i;
    *i=*j;
    *j=save;
}
void selectsort(int a[],int n)
{
    int max_idx;
    for(int i=1;i<n;i++){
        max_idx=0;
        for(int j=1;j<=n-i;j++){//注意j的取值
            if(a[j]>a[max_idx]){
                max_idx=j;
            }
        }
        if(max_idx!=n-i){
            swap(&a[max_idx],&a[n-i]);
        }       
    }
}

int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    selectsort(a,5);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}