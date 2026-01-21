#include<stdio.h>
double profit(double a,double p,double n)
{
    if(n==0){
        return a;
    }
    a*=1.0+p/100.0;
    return profit(a,p,n-1);
}
int main()
{
    double a,p;
    int n;
    scanf("%lf%lf%d",&a,&p,&n);
    printf("%.2lf",profit(a,p,n));
    return 0;
}