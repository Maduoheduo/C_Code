#include<stdio.h>//在最坏情况下，整个数组仅有一个值，那么这种方法仍然会达到 的时间复杂度，仍然不能通过本题
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
int a[500005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);  
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int x;
        scanf("%d",&x);
        int loc=binarysearch(a,x,0,n);
        printf("%d\n",loc);
        int ans;
        if(loc==-1){
            ans=0;
        }else{
            ans=-1;
            int i=1;
            while(a[loc-i]==a[loc]){
                i++;
            }
            ans+=i;
            i=1;
            while(a[loc+i]==a[loc]){
                i++;
            }
            ans+=i;
        }
        printf("%d\n",ans);
    }    
    return 0;
}