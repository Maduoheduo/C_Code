#include<stdio.h>
#include<math.h>
double S(double x1,double y1,double x2,double y2,double x3,double y3)
{   
    double k=(y1-y2)/(x1-x2);
    double m=y1-k*x1;
    return 0.5*(fabs(k*x3-y3+m))*(fabs(x1-x2));
}
int main()
{
    int n;  
    scanf("%d",&n);
    getchar();
    double x1,y1,x2,y2,x3,y3,sumS=0.0;
    scanf("(%lf,%lf)\n(%lf,%lf)\n(%lf,%lf)\n",&x1,&y1,&x2,&y2,&x3,&y3);
    sumS+=S(x1,y1,x2,y2,x3,y3);
    for(int i=0;i<n-3;i++){
        x2=x3;
        y2=y3;
        scanf("(%lf,%lf)",&x3,&y3);
        getchar();
        sumS+=S(x1,y1,x2,y2,x3,y3);
    }
    printf("%.1lf",sumS);
    return 0;
}