#include<stdio.h>
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
        int left=-1,right=n;
        while(right-left>1){
            int mid=(left+right)/2;//第一个（大于）等于x的数
            if(a[mid]<x){
                left=mid;
            }else{
                right=mid;
            }
        }
        int start=right;
        left=-1,right=n;
        while(right-left>1){
            int mid=(left+right)/2;
            if(a[mid]<=x){
                left=mid;
            }else{
                right=mid;
            }
        }
        int end=right;//第一个大于x的数
        printf("%d\n",end-start);
    }
    return 0;
}