#include<stdio.h>
int main()
{
    char ch;
    int cnt=0;
    while((ch=getchar())!=EOF&&ch!='\n'){
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}