//地址是16位字符，可用%p表示,指针专用
//&取地址,*解指针

#include<stdio.h>
int main()
{
    //指针定义与初始化，防止野指针
    int i;
    int* p=&i;
    int* a=NULL;
    //数组与指针
    //数组变量名本身就是指针,相邻变量地址之差为数据类型占用的字节数
    int a[10]={};
    printf("数组与指针\n%p\n%p\n%p\n%p\n",a,&a,&a[0],&a[1]);

    return 0;
}