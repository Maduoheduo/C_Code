#include<stdio.h>
long long fibonacci(int n)
{
    long long a=1,b=1,c=0;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld",fibonacci(n));
    return 0;
}