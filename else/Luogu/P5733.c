#include<stdio.h>
char input[105];
int main()
{
    char ch;
    while((ch=getchar())!=EOF&&ch!='\n'){
        if(ch>='a'&&ch<='z'){
            ch+='A'-'a';
        }
        putchar(ch);
    }
}