#include<stdio.h>
int intpow(int a,int n)
{
    int c=a;
    a=1;
    while(n--){
        a*=c;
    }
    return a;
}
int min(int a,int b)
{
    if(a<=b){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int h,f,t;
    int y;
    scanf("%d%d%d",&h,&f,&t);
    if(h<=5){
        y=min(f*intpow(2,h+2),2000);
    }else if(h>=6&&h<=7){
        y=3000;
    }else if(h>=8&&h<=10){
        y=4000;
    }else if(h>=11&&h<=12){
        y=6000;
    }else{
        y=8000;
    }
    int x=4*y+t;
    printf("%d",x);
    return 0;
}