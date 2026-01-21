#include<stdio.h>
struct date{
    int month;
    int date;
    int year;
};
int isleap(struct date d){
    int judge=0;
    if(d.year%4==0&&d.year%100!=0||d.year%400==0){
        judge=1;
    }
    return judge;
}
int numberofdays(struct date d){
        int days;
        const int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(d.month==2&&isleap(d)==1){
           days=29;
        }else{
           days=dayspermonth[d.month-1];
        }
        return days;
}
int main(){
    struct date today;
    printf("请输入:\n");
    scanf("%i %i %i",&today.month,&today.date,&today.year);
    struct date tomorrow;
    tomorrow=today;
    if(today.date==numberofdays(today)){//在函数调用时只要写today,不用加struct date
        if(today.month!=12){
            tomorrow.month++;
            tomorrow.date=1;
        }else{
            tomorrow.year++;
            tomorrow.month=1;
            tomorrow.date=1;
        } 
    }else{
        tomorrow.date++;
    }
    printf("明天是%i-%i-%i",tomorrow.month,tomorrow.date,tomorrow.year);

    return 0;
}