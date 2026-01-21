#include<stdio.h>
#include<string.h>
char s[105];
int main()
{
    int n,cnt=0;
    scanf("%d\n",&n);
    gets(s);
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]=='V'&&s[i+1]=='K'){
            cnt++;
            s[i]=' ';
            s[i+1]=' ';
        }
    }
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]=='V'&&s[i+1]=='V'||s[i]=='K'&&s[i+1]=='K'){
            cnt++;
            break;
        }
    }
    
    printf("%d",cnt);
    return 0;
}