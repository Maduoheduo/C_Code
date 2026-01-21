#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=0B11111111111111110000000011111111;
    printf("%d",x&a);
    return 0;
}