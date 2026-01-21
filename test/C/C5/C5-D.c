#include<stdio.h>
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
            break;
        }
    }
    return prime;
}
int main()
{
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        while(isprime(n)==0){
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}