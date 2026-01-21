#include<stdio.h>
#include<string.h>
char s[260];
int boy[3],girl[4];
int main()
{
    gets(s);
    int cntb=0,cntg=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y'){
            cntb++;
        }
        if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l'){
            cntg++;
        }
    }
    printf("%d\n%d",cntb,cntg);
    return 0;
}