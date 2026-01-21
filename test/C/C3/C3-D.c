#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    unsigned int a,b;
    for(int j=0;j<n;j++){
        b=0;
        scanf("%u",&a);
        for(int i=0;i<32;i++){
            b|=((a>>i)&1)<<(32-i-1);
        }
        printf("%u\n",b);
    }


    return 0;
}