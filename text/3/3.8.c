#include<stdio.h>
int main()
{
    int n,k;
    unsigned long long a;
    while(scanf("%d%d%llu",&n,&k,&a)!=EOF){
        k=k%n;
        unsigned long long b=a>>n<<n;
        a-=b;
        while(k--){
            unsigned long long left=(a>>(n-1))&1ull;
            a=a<<1;
            a&=~(1ull<<(n));
            a|=left;
        }  
        printf("%llu\n",a);      
    }
    return 0;
}