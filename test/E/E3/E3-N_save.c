/* 
 Author: ÂíÔ¶Ïè
 Result: WA	Submission_id: 7516924
 Created at: Sun Oct 05 2025 14:37:56 GMT+0800 (China Standard Time)
 Problem_id: 9502	Time: 1597	Memory: 2140
*/

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
        b=b-k;
        c=c-m;
        delta=b*b-4.0*a*c;
        if(equal(a,0.0)){
            if(equal(b,0.0)){
                if(equal(c,0.0)){
                    res=-1;
                }else{
                    if(equal(x1,x2)){
                    res=3;
                    ans1=x1;
                    }else{
                        res=0;
                    }
                }
            }else{
                res=1;
                ans1=-c/b;
            }
        }else{
            if(equal(x1,x2)){
                    res=3;
                    ans1=x1;
            }else if(delta<0){
                res=0;
                printf("0\n");
            }else if(equal(delta,0.0)){
                res=1;
                ans1=-b/(2.0*a);
            }else{
                res=2;
                ans1=min((-b+sqrt(delta))/(2.0*a),(-b-sqrt(delta))/(2.0*a));
                ans2=max((-b+sqrt(delta))/(2.0*a),(-b-sqrt(delta))/(2.0*a));
            }
        }
        switch(res){
            case -1:
                printf("-1\n");
                break;
            case 0:
                printf("0\n");
                break;
            case 1:
                printf("1 (%.2lf,%.2lf)\n",ans1,k*ans1+m);
                break;
            case 2:
                printf("2 (%.2lf,%.2lf) (%.2lf,%.2lf)\n",ans1,k*ans1+m,ans2,k*ans2+m);
                break;
            case 3:
                printf("1 (%.2lf,%.2lf)\n",ans1,a*ans1*ans1+b*ans1+c);
                break;
            }
    }
    return 0;
}