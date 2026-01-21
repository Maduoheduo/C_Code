#include<stdio.h>
#include<math.h>
int max(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}
int min(int a,int b){
    if(a>=b){
        return b;
    }else{
        return a;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int a1,b1,c1,d1,a2,b2,c2,d2;
    long long s1,s2,jiao,bing;
    while(t--){
        scanf("%d%d%d%d%d%d%d%d",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2);
        s1=(c1-a1)*(d1-b1);
        s2=(c2-a2)*(d2-b2);
        if(max(a1,a2)<min(c1,c2)&&max(b1,b2)<min(d1,d2)){
            jiao=(min(c1,c2)-max(a1,a2))*(min(d1,d2)-max(b1,b2));
        }else{
            jiao=0;
        }
        bing=s1+s2-jiao;
        printf("%lld %lld\n",jiao,bing);
    }
    return 0;
}