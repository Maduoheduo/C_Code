#include<stdio.h>
int isprimefactor(int n)
{
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int loop(int n)
{
    int f=isprimefactor(n);
    if(f<n){//是合数
        n/=f;
    }else{
        n=(n|(2*n))+1;
    }
    return n;
}   
int only2(int n,int f)
{
    if(f==n){
        return 1;//正确
    }else if(f>10000000){
        return 0;
    }
    f=f<<1;
    return only2(n,f);  
}
int main()
{
    int n;
    int cnt=0;
    scanf("%d",&n);
    while(only2(n,2)!=1){
        n=loop(n);
        cnt++;
    }
    printf("%d %d",n,cnt);
    return 0;
}