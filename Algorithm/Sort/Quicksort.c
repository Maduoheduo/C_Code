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
int main()
{
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    quicksort(list,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",list[i]);
    }
    return 0;
}