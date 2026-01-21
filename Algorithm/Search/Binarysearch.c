#include<stdio.h>
void swap(int arr[],int a,int b)
{
    int save=arr[a];
    arr[a]=arr[b];
    arr[b]=save;
}
int partition(int arr[],int left,int right)
{
    int pivot=arr[right];
    int i=left-1;
    for(int j=left;j<right;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,right);
    return i+1;
}
void quicksort(int arr[],int left,int right)
{
    if(left<right){
        int mid=partition(arr,left,right);
        quicksort(arr,left,mid-1);
        quicksort(arr,mid+1,right);
    }
}
//
int binarysearch(int arr[],int target,int left,int right)
{
    if(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            return binarysearch(arr,target,left,mid-1);
        }else{
            return binarysearch(arr,target,mid+1,right);
        }
    }
        return -1;
}
int optisearch(int arr[],int target_index,int op)//op=1-->最后出现此元素的位置，反之为最先出现
{
    int i=target_index+op;
    while(arr[i]==arr[target_index]){
        i+=op;
    }
    return i-op;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    int target;
    scanf("%d",&target);
    printf("%d",optisearch(arr,binarysearch(arr,target,0,n-1),1)+1);
    return 0;
}