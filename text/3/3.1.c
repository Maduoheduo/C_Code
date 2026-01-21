#include<stdio.h>
int main()
{

    long long a,b,c,d,e,f;
    unsigned long long m;
    scanf("%lld%lld",&a,&b);
    if(a<0){
        c=-1;
        e=a*(-1);
    }else{
        c=1;
        e=a;
    }
    if(b<0){
        d=-1;
        f=a*(-1);
    }else{
        d=1;
        f=a;
    }
    if(c*d==1){
        m=e+f;
        if(c==1){
            if(m>9223372036854775807){
                printf("PO!");
            }
        }else{
            if(m>9223372036854775807){
                printf("NO!");
            }
        }        
    }else{
        printf("%lld",a+b);
        }
    return 0;
}