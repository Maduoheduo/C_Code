//1的逆序数为1,说明1前面有一个比他大的数,故在其前面留1个空格。
//2的逆序数为3，说明……………………,故在其前面留3个空格(已经填1的不算空格)
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int cnt=1;cnt<n+1;cnt++){//i为123456
        int blank=0;
        for(int i=0;i<cnt;i++){
            if(blank==b[cnt-1]){
                a[blank]=cnt;
                break;
            } 
            if(a[i]==0){
                blank++;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[n]);
    }
    return 0;
}