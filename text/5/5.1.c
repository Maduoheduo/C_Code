#include<stdio.h>
#include<math.h>
double x[5],y[5],z[5];
void dis(double x[],double y[],double z[],int a,int b)
{
    printf("%.2lf\n",sqrt(pow(x[a-1]-x[b-1],2)+pow(y[a-1]-y[b-1],2)+pow(z[a-1]-z[b-1],2)));
}
int main()
{
    for(int i=0;i<4;i++){
        scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);
    }
    dis(x,y,z,2,4);
    dis(x,y,z,1,3);
    dis(x,y,z,2,3);
    dis(x,y,z,3,4);
    dis(x,y,z,1,2);
    dis(x,y,z,1,4);
    return 0;
}