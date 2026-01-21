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
    int year,month,day,hour,minute;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%d.%d.%d %d:%d",&year,&month,&day,&hour,&minute);
        hour+=minute/60;
        minute%=60;
        day+=hour/24;
        hour%=24;
        year+=(month-1)/12;
        month=(month-1)%12+1;
        while(day>days(month,year)){
            day-=days(month,year);
            month++;
            if(month>12){
                year+=month/12;
                month%=12;
            }
        }
        if(year>=10000){
            printf("%5d.%02d.%02d %02d:%02d\n",year,month,day,hour,minute);
        }else{
            printf("%04d.%02d.%02d %02d:%02d\n",year,month,day,hour,minute);
        }
    }
    return 0;
}