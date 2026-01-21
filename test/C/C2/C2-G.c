#include<stdio.h>
int main()
{
    int n;
    int hh0,mm0,ss0,t0;
    int h1,m1,s1,h2,m2,s2,t;
    int dh,dm,ds;
    scanf("%d",&n);
    scanf("%d:%d:%d",&hh0,&mm0,&ss0);
    t0=hh0*3600+mm0*60+ss0;
    while(n--){
        scanf("%d:%d:%d%d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
        t=(h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
        dh=t/3600;
        dm=t%3600/60;
        ds=t%60;
        if(dh/10==0){
            printf("0%d:",dh);
        }
        else{
            printf("%d:",dh);
        }
        if(dm/10==0){
            printf("0%d:",dm);
        }else{
            printf("%d:",dm);
        }
        if(ds/10==0){
            printf("0%d ",ds);
        }else{
            printf("%d ",ds);
        }
        if(t>=t0){
            printf("Yes!\n");
        }else{
            printf("No~555~\n");
        }
    }   
    return 0;
}