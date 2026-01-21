#include<stdio.h>
#include<math.h>
double dis(double x1,double y1,double z1,double x2,double y2,double z2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
}
double vecmultiple(double x1,double y1,double z1,double x2,double y2,double z2)
{
    return x1*x2+y1*y2+z1*z2;
}
int main()
{
    int n;
    scanf("%d",&n);
    double x1,y1,z1,x2,y2,z2,x3,y3,z3;
    while(n--){
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
        double cos=vecmultiple(x1-x2,y1-y2,z1-z2,x3-x2,y3-y2,z3-z2)/(dis(x1,y1,z1,x2,y2,z2)*dis(x3,y3,z3,x2,y2,z2));
        printf("%.5lf\n",acos(cos));
    }
    return 0;
}