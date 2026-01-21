#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%lf%lf",&x,&y);
        printf("%.5lf\n",pow(x,1/y));
    }
    return 0;
}