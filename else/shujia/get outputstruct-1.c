#include<stdio.h>
struct input{
    int x;
    int y;
};
void getstruct(struct input);//这里可以不加具体变量名
void outputstruct(struct input);
int main()
{
    struct input a={0,0};
    getstruct(a);//这样做无法改变main函数中a的值，a是先复制一份再传入函数中的
    outputstruct(a);
    return 0;
}
void getstruct(struct input a){//但这里要
    scanf("%i %i",&a.x,&a.y);//这里把a换成p，就能输出新赋的值。或改用结构体指针
}
void outputstruct(struct input a){
    printf("%i %i",a.x,a.y);
}