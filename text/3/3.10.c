#include<stdio.h>
#include<math.h>
#define eps 1e-10
int equal(double a,double b)
{
    if(fabs(a-b)<eps){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(equal(a,0.0)){
        printf("No");
    }else{
        if(equal(pow(b,2)-4*a*c,0.0)){
            printf("1");
        }else if(pow(b,2)-4*a*c>0.0){
            printf("2");
        }else if(pow(b,2)-4*a*c<0.0){
            printf("0");
        }
    }
    return 0;
}