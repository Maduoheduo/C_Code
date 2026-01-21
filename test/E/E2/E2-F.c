#include<stdio.h>
#define l 190
int main()
{
    int n;
    scanf("%d",&n);
    int d[n-1];
    long long d1[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&d[i]);
    }
    d1[0]=0;
    for(int i=1;i<n;i++){
        d1[i]=d1[i-1]+l+d[i-1];
    }
    int s,t;
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d%d",&s,&t);
        printf("%lld\n",d1[t-1]-d1[s-1]);
    }
    return 0;
}