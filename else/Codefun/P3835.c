#include<stdio.h>
int a[65];
int main()
{
    int n;
    scanf("%d",&n);
    a[0]=1;
    a[1]=2;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d",a[n-1]);
    return 0;
}