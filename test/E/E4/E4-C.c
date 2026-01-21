#include<stdio.h>
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
int main()
{
    int T;
    scanf("%d",&T);
    int y,m,d;
    int day;
    while(T--){
        day=0;
        scanf("%d%d%d",&y,&m,&d);
        for(int i=1;i<m;i++){
            day+=days(i,y);
        }
        day+=d;
        printf("%d\n",day);
    }
    return 0;
}