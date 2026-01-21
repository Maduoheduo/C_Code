#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double pi=0.0;
    int sign=1.0;
    for(int i=0;i<n;i++){
        pi+=sign/(2.0*i+1.0);
        sign=-sign;
    }
    printf("%.9lf",4.0*pi);
    return 0;
}