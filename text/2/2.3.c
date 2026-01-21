#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double a[n],b[n],c[n],p[n],s[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
        p[i]=(a[i]+b[i]+c[i])/2;
        s[i]=p[i]*(p[i]-a[i])*(p[i]-b[i])*(p[i]-c[i]);
    }
    for(i=0;i<n;i++){
        printf("%.1lf\n",s[i]);
    }
    return 0;
}