#include<stdio.h>
long long read()
{
    long long x = 0, f = 1;
    long long c = getchar();
    while (c > '9' || c < '0')
    {
        if (c == '-')
            f = -f;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
        x = (x << 3) + (x << 1) + (c ^ '0'), c = getchar();
    return x * f;
}
int main()
{
    int t;
    scanf("%d",&t);
    long long l,r;
    while(t--){
        l=read();
        r=read();
        while(l<r){
            l|=(l+1);
        }
        printf("%lld\n",l);
    }
    return 0;
}