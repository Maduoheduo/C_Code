#include<stdio.h>
#include<string.h>
char s[105];
int main()
{
    while((scanf("%s",s))!=EOF){
        if(s[0]>='a'&&s[0]<='z'){
            s[0]+='A'-'a';
        }
        puts(s);
    }
    return 0;
}