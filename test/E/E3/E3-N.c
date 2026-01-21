#include<stdio.h>
#include<math.h>
#define eps 1e-9
int equal(double a,double b){
    if(fabs(a-b)<eps){
        return 1;
    }else{
        return 0;
    }
}
double max(double a,double b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
double min(double a,double b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
double f(double a,double b,double c,double x){
    double res = a * x * x + b * x + c;
    return res;
}
int main()
{
    int t,res;
    double a,b,c,x1,x2,y1,y2;
    scanf("%d",&t);
    double k,m,delta;
    double ans1,ans2;
    while(t--){
        ans1=ans2=0.0;
        res=0;
        scanf("%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&x1,&y1,&x2,&y2);
        k=(y1-y2)/(x1-x2);
        m=y1-k*x1;
        delta=b*b-4*a*c;
        if(equal(a,0.0)){
            if(equal(b,0.0)&&equal(c,0.0)){//二次函数abc全为0
                res=-1;
            }else{
                if(equal(x1,x2)){
                    res=1;
                    ans1=x1;
                }else if(equal(b-k,0.0)){
                    if(equal(c-m,0.0)){
                        res=-1;
                    }else{
                        res=0;
                    }
                }else{
                    res=1;
                    ans1=-(c-m)/(b-k);
                }
            }
        }else{
            if(equal(x1,x2)){
                res=1;
                ans1=x1;
            }else if(delta<0.0){
                res=0;
            }else if(equal(delta,0.0)){
                res=1;
                ans1=-(b-k)/(2.0*a);
            }else{
                res=2;
                ans1=min((-(b-k)+sqrt(delta))/(2.0*a),(-(b-k)-sqrt(delta))/(2.0*a));
                ans2=max((-(b-k)+sqrt(delta))/(2.0*a),(-(b-k)-sqrt(delta))/(2.0*a));
            }
        }
        printf("%d ",res);
        switch(res){
            case -1:
                printf("\n");
                break;
            case 0:
                printf("\n");
                break;
            case 1:
                printf("(%.2lf,%.2lf)\n",ans1,f(a,b,c,ans1));
                break;
            case 2:
                printf("(%.2lf,%.2lf) (%.2lf,%.2lf)\n",ans1,f(a,b,c,ans1),ans2,f(a,b,c,ans2));
                break;
            }
    }
    return 0;
}