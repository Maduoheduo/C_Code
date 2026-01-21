#include<stdio.h>
unsigned int F[100000000];
int main()
{
    int n,q;
    scanf("%d%u%d",&n,&F[0],&q);
    int i;
    for(i = 1; i <= n; i++) {
        unsigned int x = F[i-1];
        x ^= x << 13;
        x ^= x >> 17;
        x ^= x << 5;
        F[i] = x;
    }
    int m;
    while(q--){
        scanf("%d",&m);
        printf("%u\n",F[m]);
    }
    return 0;
}