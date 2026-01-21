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
int max(int a[],int n,int inf)
{
    int max=inf;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int n,int sup)
{
    int min=sup;
    for(int i=0;i<n;i++){
        if(a[i]<min&&a[i]!=0){
            min=a[i];
        }
    }
    return min;
}
int hash[(char)26];
int main()
{
    char ch;
    while((ch=getchar())!=EOF&&ch!='\n'){
        ch-='a';
        hash[(int)ch]++;
    }
    int minus=max(hash,26,0)-min(hash,26,100);
    if(isprime(minus)){
        printf("Lucky Word\n%d",minus);       
    }else{
        printf("No Answer\n0");
    }
    return 0;
}