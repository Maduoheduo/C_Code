#include<stdio.h>
#include<math.h>
#define eps 1e-8
double f(double x)
{
    return pow(x,3)+sin(x)+x-3;
}
int equal(double a,double b)
{
    if(fabs(a-b)<eps){
        return 1;
    }
    return 0;
}
double solve(double low,double high,double target)//只用于单增函数
{
    double mid=(low+high)/2.0;
    if(equal(f(mid),target)){
        return mid;
    }
    if(f(mid)>target){
        return solve(low,mid,target);
    }else{
        return solve(mid,high,target);
    }
}
int main()
{
    double target;
    scanf("%lf",&target);
    printf("%lf",solve((double)-1e3,(double)1e3,target));
    return 0;   
}