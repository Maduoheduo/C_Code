#include<stdio.h>
int isprime(int n)
{
    int prime=1;
    if(n==2){
        return 1;
    }
    if(n==1||n==0){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    return prime;
}
int primefactordivide(int n)
{
    for(int i=2;i*i<n;i++){
        if(n%i==0&&isprime(n/i)){
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n/primefactordivide(n));
    return 0;
}