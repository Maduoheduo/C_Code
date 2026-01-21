#include<stdio.h>
int Switch(int a){
    int i;
    if(a>=65&&a<=90){
        i=90-(a-65);
    }else if(a>=97&&a<=122){
        i=122-(a-97);
    }
    return i;
}
int main()
{
    int a;
    while((a=getchar())!=EOF&&a!='\n'){
        a=Switch(a);
        putchar(a);
    }
    return 0;
}