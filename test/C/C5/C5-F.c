#include<stdio.h>
int s[3001];
int n5(int n)
{
    while(n>0){
        if(n%10==5){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(n5(i)==1){
            s[i]=1;
        }
    }
    int a,b,c;
    long long cnt=0;
    for(a=0;a<=n/3;a++){
        for(b=a;b<=(n-a)/2;b++){
            c=n-a-b;
            if(s[a]&&s[b]&&s[c]){
                cnt++;
            }
        }
    }
    printf("%lld",cnt);
    return 0;
}