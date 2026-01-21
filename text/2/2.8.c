#include<stdio.h>
int main()
{
    int a;
    while((a=getchar())!=EOF&&a!='\n'){
        if(a>='A'&&a<='Z'){
            a+=32;
        }else if(a>='a'&&a<='z'){
            a-=32;
        }
    putchar(a);
    }
    return 0;
}