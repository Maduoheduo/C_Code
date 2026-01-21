#include<stdio.h>
struct date{
    int month;
    int date;
    int year;
}today;
struct date *p=&today;
int main(){
    (*p).month=12;//*除了定义都表示解指针，&是取地址
    p->month=12;//与上一行是等价的
    printf("%i %i");
    return 0;
}