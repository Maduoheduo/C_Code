#include<stdio.h>
//求第一个大于等于x的数的索引
int start(int arr[],int low,int high,int x)//一般是取-1和n
{
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]<x){
            low=mid;
        }else{
            high=mid;
        }
    }
    return low;
}
//求第一个大于x的数的索引
int end(int arr[],int low,int high,int x)//一般是取-1和n
{
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            low=mid;
        }else{
            high=mid;
        }
    }
    return low;
}
//end-start就是x的个数