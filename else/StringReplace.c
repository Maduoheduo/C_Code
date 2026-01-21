#include<stdio.h>
#include<string.h>
char dst[10005],src[15],alt[15],behind[10005],mid[15];
int main()
{
    char *i=dst,*j=NULL;
    gets(dst);
    scanf("%s\n",src);
    scanf("%s\n",alt);
    while((j=strstr(i,src))){
        strcpy(behind,j+strlen(src));
        *j='\0';
        strcat(dst,alt);
        strcat(dst,behind);
        i+=strlen(src);
        if(i>dst+strlen(dst)){
            break;
        }
    }
    printf("%s",dst);
    return 0;
}