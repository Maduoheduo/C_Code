#include<stdio.h>
int max(int a[],int n,int inf)
{
    int max=inf;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int n,int sup)
{
    int min=sup;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}