#include<stdio.h>
void add0(int a){
    if(a/10==0){
        printf("0");
    }
}
int runnian(int a){
    if((a%4==0&&a%100!=0)||a%400==0){
        return 1;
    }
    return 0;
}
int daypermonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int runniandpm[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int n;
    scanf("%d",&n);
    int year1,month1,day1,hour1,minute1;
    int exit=0;
    while(n--){
        scanf("%d.%d.%d %d:%d",&year1,&month1,&day1,&hour1,&minute1);
        if(minute1>=60){
            hour1+=minute1/60;
            minute1%=60;
        }
        if(hour1>=24){
            day1+=hour1/24;
            hour1%=24;
        }
        while((month1>12||day1>daypermonth[month1])&&exit==0){
            if(month1>12){//问题在这里吗
               year1+=month1/12;
               month1=(month1-1)%12+1;
            }
            if(day1>daypermonth[month1]){
                if(runnian(year1)&&month1==2){
                    if(day1==29){
                        exit=1;
                    }else{
                        day1-=runniandpm[month1];
                        month1++;
                    }
                }else{
                    day1-=daypermonth[month1];
                    month1++;
                }
            }
            if(month1>12){
               year1+=month1/12;
               month1=(month1-1)%12+1;
            }
        }
        printf("%d.",year1);
        add0(month1);
        printf("%d.",month1);
        add0(day1);
        printf("%d ",day1);
        add0(hour1);
        printf("%d:",hour1);
        add0(minute1);
        printf("%d\n",minute1);
    }
    return 0;
}