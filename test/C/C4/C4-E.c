#include<stdio.h>
int zeller(int c,int y,int m,int d){
    if(m<3){
        y--;
        m+=12;
    }
    int w=(y+y/4+c/4-2*c+13*(m+1)/5+d-1)%7;
    while(w<0){
        w+=7;
    }
    return w;
}
int main()
{
    int longday;
    long long x;
    int c,y,m,d;
    while(scanf("%d%lld",&longday,&x)!=EOF){
        c=(longday%10000)/100;
        y=longday%100;
        m=longday/1000000;
        d=(longday/10000)%100;
        int a=zeller(c,y,m,d);
        a+=x%7;
        if(a>=7){
            a-=7;
        }
        switch(a){
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
        }
    }    
    return 0;
}