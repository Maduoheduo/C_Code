#include<stdio.h>
long long fibonacci(int n)
{
    long long a=2,b=1,c=0;
    if(n==0){
        return 2;
    }else if(n==1){
        return 1;
    }
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        printf("%lld\n",fibonacci(a));
    }
    return 0;
}
//2 1 3 4 7 11 18 29 47