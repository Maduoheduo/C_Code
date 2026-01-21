#include<stdio.h>
#include<math.h>
double f1(int n){
    double ret=0;
    for(int i=0;i<n;i++){
        ret+=(double)pow(-1,i)/(2*i+1);
    }
    ret*=4;
    return ret;
}
double f2(int n){
    double ret=0;
    for(int i=0;i<n;i++){
        ret+=(double)1/pow(2*i+1,2);
    }
    ret*=8;
    ret=sqrt(ret);
    return ret;
}
int main()
{
    int t;
    scanf("%d",&t);
    int n[t];
    for(int i=0;i<t;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<t;i++){
        printf("%.6lf\n",fabs(f1(n[i])-f2(n[i])));
    }
    return 0;
}