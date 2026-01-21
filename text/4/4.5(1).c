#include<stdio.h>
#include<stdlib.h>
int days(int m,int y)
{
    if(((y%4==0&&y%100!=0)||y%400==0)&&m==2){
        return 29;
    }else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        return 31;
    }else if(m==2){
        return 28;
    }else{
        return 30;
    }
}
int zeller(int c,int y,int m,int d){
    int w=(y+y/4+c/4-2*c+13*(m+1)/5+d-1)%7;
    while(w<0){
        w+=7;
    }
    return w;
}
int betweendays(int y,int m1,int m2,int d1,int d2)
{
    int sum1=0,sum2=0;
    for(int i=1;i<m1;i++){
        sum1+=days(i,y);
    }
    sum1+=d1;
    for(int i=1;i<m2;i++){
        sum2+=days(i,y);
    }
    sum2+=d2;
    int betweendays=abs(sum1-sum2);
    return betweendays;
}
int main()
{
    int year;
    scanf("%d",&year);
    int c=year/100;
    int y=year%100;
    int cnt_sunday=0;
    int date;
    for(int d=1;d<32;d++){
        if(zeller(c,y,6,d)==0){
            cnt_sunday++;
        }
        if(cnt_sunday==3){
            date=d;
            break;
        }
    }
    int by,bm,bd;
    scanf("%d%d%d",&by,&bm,&bd);
    printf("%d\n%d",date,betweendays(year,6,bm,date,bd));
    return 0;
}