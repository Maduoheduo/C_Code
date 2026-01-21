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
int primedivide(int n)
{
    for(int i=2;i<=n/2;i++){
        if(isprime(i)&&isprime(n-i)){
            return i;
        }
    }
    return -23767;   
}
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=4;i<=N;i+=2){
        printf("%d=%d+%d\n",i,primedivide(i),i-primedivide(i));
    }
    return 0;
}