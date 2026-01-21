#include<stdio.h>
#include<math.h>
double distance(double x1,double x2,double y1,double y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main()
{
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double C=distance(x1,x2,y1,y2)+distance(x1,x3,y1,y3)+distance(x2,x3,y2,y3);
    printf("%.2lf",C);
    return 0;
}