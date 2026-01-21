#include<stdio.h>
#include<string.h>
char input[1005];
int main()
{
    char *p=NULL;
    fgets(input,1005,stdin);
    if(strstr(p,'\n')!=NULL){
        *p='\0';
    }
    return 0;   
}