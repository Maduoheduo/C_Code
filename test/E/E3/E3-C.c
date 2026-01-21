#include<stdio.h>
int main()
{
    long long a,b;
    long long c=0;
    long long mask=0;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        c=a^b;
        for(int i=0;i<63;i++){
            if(((a>>i)&1ll)==0&&((b>>i)&1ll)==1){
                mask=~(1ll<<i);
                c&=mask;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}