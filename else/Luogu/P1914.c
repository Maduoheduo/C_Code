#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char ch;
    while((ch=getchar())!=EOF&&ch!='\n'){
        ch-='a';
        ch='a'+(ch+n)%26;
        putchar(ch);
    }
    return 0;
}