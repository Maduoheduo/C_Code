#include<stdio.h>
int a[105];
int isprime(int n)
{
    int prime=1;
    if(n==2){
        return 1;
    }
    if(n==1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
        }
    }
    return prime;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(isprime(a[i])==1){
            printf("%d ",a[i]);
        }
    }   
    return 0;
}