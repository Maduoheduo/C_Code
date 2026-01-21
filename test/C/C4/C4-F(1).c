#include<stdio.h>
int gcd(int a,int b)
{
    while(b!=0){
        int hold=b;
        b=a%b;
        a=hold;
    }
    return a;
}
int main()
{
    int T;
    scanf("%d",&T);
    int n,a1,d;
    long long c,e=1;
    while(T--){
        scanf("%d%d%d",&n,&a1,&d);
        e=gcd(a1,a1+(n-1)*d);
        for(int i=1;i<n;i++){
            c=a1+i*d;
            if(e==gcd(c,e)){
                break;
            }
            e=gcd(c,e); 
            if(e==1){
                break;
            }           
        }
        printf("%lld\n",e);
    }
    return 0;
}