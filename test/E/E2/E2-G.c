#include<stdio.h>
#include<math.h>
#define eps 1e-9
int equ(double a,double b){
    if(fabs(a-b)<=eps){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    double a,b,c,x,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    int res;
    if(a==0){
        if(equ(b,0.0)){
            if(equ(c,0.0)){
                res=4;
            }else{
                res=5;
            } 
        }else{
            x=-c/b;
            res=3;
        }
    }else{
        double del=b*b-4*a*c;
        if(equ(del,0.0)){
            res=1;
            x=-b/(a*2);
        }else if(del<0.0){
            res=5;
        }else{
            res=2;
            if(a>0){
                x1=(sqrt(del)-b)/(2*a);
                x2=(-sqrt(del)-b)/(2*a);
            }else{
                x2=(sqrt(del)-b)/(2*a);
                x1=(-sqrt(del)-b)/(2*a);
            }
        }
    }
    switch(res){
        case 1:
            printf("The same two roots: %.2lf",x);
            break;
        case 2:
            printf("%.2lf %.2lf",x1,x2);
            break;
        case 3:
            printf("Just one root: %.2lf",x);
            break;
        case 4:
            printf("Infroots");
            break;
        case 5:
            printf("No Root");
            break;
    }
    return 0;
}