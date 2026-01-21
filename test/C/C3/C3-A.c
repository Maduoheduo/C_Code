#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    unsigned int a,b;
    for(int i=0;i<t;i++){
        scanf("%u%u",&a,&b);
        printf("%u %u %u %u %u %u\n",~a,a&b,a|b,a^b,a<<b,a>>b);
    }
    return 0;
}