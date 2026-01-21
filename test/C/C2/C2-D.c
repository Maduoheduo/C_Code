#include<stdio.h>
int main()
{
    int n;
    int i=0;
    scanf("%d",&n);
    long long a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[n-i-1]);
    }
    for(i=0;i<n;i++){
        printf("%lld ",a[i]);
    }
    return 0;
}