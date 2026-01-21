#include<stdio.h>
#include<stdlib.h>
void merge(int *arr, int left, int mid, int right){
    int i=left;
    int j=mid;
    int *temp=(int*)malloc((right-left)*4);//存放排序结果
    int index=0;
    while(i<mid&&j<right){
        if(arr[i]<arr[j]){
            temp[index]=arr[i];
            i++;
        }else{
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    //防止两数组不等长
    while(i<mid){
        temp[index]=arr[i];
        i++;
        index++;
    }
    while(j<right){
        temp[index]=arr[j];
        j++;
        index++;
    }
    for(int i=0;i<index;i++){
        arr[left+i]=temp[i];
    }
    free(temp);
}
void mergesort(int *arr, int left, int right){
    if(right - left <= 1){
        return;
    }
    int mid = (left + right) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid, right);
    merge(arr, left, mid, right);
}
int main()
{
    int n;
    scanf("%d",&n);
    int *arr1=(int*)malloc(4*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    mergesort(arr1,0,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    free(arr1);
    return 0;
}