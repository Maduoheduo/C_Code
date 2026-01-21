#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf%lf\n%lf%lf\n%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a,b,c;
    a=pow((pow((x1-x2),2)+pow((y1-y2),2)),0.5);
    b=pow((pow((x1-x3),2)+pow((y1-y3),2)),0.5);
    c=pow((pow((x2-x3),2)+pow((y2-y3),2)),0.5);
    printf("%.2lf",a+b+c);
    return 0;
}