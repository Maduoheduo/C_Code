#include<stdio.h>
#define pi 3.14159265358979
int main()
{
    int n;
    double r,c;
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&r);
        c=2*r*pi;
        printf("%.4lf\n",c);
    }
    return 0;
}