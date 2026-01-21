#include<stdio.h>
int a[100005];
int S[100005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    S[0]=a[0];
    for(int i=1;i<n;i++){
        S[i]=a[i]+S[i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",S[i]);
    }
    return 0;
}