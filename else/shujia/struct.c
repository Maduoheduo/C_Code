#include<stdio.h>
struct date{
    int month;
    int day;
    int year;
        
    };
int main()
{
    struct date today;
    today.month=9;
    today.day=13;
    today.year=2025;
    printf("%i-%i-%i",today.month,today.day,today.year);
    struct date *dateone=&today;
    //结构的指针定义格式同对应结构
    return 0;
}