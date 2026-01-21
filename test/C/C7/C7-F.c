#include<stdio.h>
#include<string.h>
char bf[1024];
char s[655]={0};
int main()
{
    scanf("%s",bf);
    getchar();//尼玛
    char *ptr=s;
    int pc=0;
    s[0]=0;
    int len=strlen(bf);
    while(pc<len){
        if(bf[pc]=='<'){
            ptr--;
        }else if(bf[pc]=='>'){
            ptr++;
        }else if(bf[pc]=='+'){
            (*ptr)++;
        }else if(bf[pc]=='-'){
            (*ptr)--;
        }else if(bf[pc]=='.'){
            putchar(*ptr);
        }else if(bf[pc]==','){
            char ch=getchar();
            (*ptr)=ch;
        }else if(bf[pc]=='['){
            if(*ptr==0){
                int flag=1;
                while(flag>0&&pc<len-1){
                    pc++;
                    if(bf[pc]=='[')flag++;
                    if(bf[pc]==']')flag--;
                }   
            }   
        }else if(bf[pc]==']'){
            if(*ptr!=0){
                int flag=1;
                while(flag>0&&pc>0){
                    pc--;
                    if(bf[pc]=='[')flag--;
                    if(bf[pc]==']')flag++;
                }    
            } 
        }
        pc++;
    }
    return 0;
}