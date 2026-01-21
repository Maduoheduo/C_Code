#include<stdio.h>
char s[10];
int main()
{
    int cnt=0,ac=0;
    while(scanf("%s",s)!=EOF){
        if(s[0]=='A'){
            ac++;
        }
        if(s[0]!='C'){
            cnt++;
        }
    }
    printf("%.3lf",(double)ac/cnt);
    return 0;
}