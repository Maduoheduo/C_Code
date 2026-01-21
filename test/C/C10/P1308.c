#include<stdio.h>
#include<string.h>
char src[15];
char dst[1000005];
char dst_temp[1000005];
char upperswitch(char c)
{
    if(c<'a'&&c!=' '){
        c+=32;
    }
    return c;
}
int main()
{
    char *p=NULL;
    int i=0,cnt=0,first=-1;
    char ch;
    while((ch=getchar())!='\n'){
        src[i]=upperswitch(ch);
        i++;
    }
    char temp[11];
    strcpy(temp,src);
    src[0]=' ';
    src[1]='\0';
    strcat(src,temp);
    src[strlen(src)]=' ';
    src[strlen(src)+1]='\0';
    i=0;
    while((ch=getchar())!=EOF&&ch!='\n'){
        dst[i]=upperswitch(ch);
        i++;
    }
    strcpy(dst_temp,dst);
    dst[0]=' ';
    dst[1]='\0';
    strcat(dst,dst_temp);
    dst[strlen(dst)]=' ';
    dst[strlen(dst)+1]='\0';
    p=dst;
    while((p=strstr(p,src))&&p!=NULL){
        if(first==-1){
            first=p-dst;
        }
        cnt++;
        p=p+strlen(src)-2;
    }
    if(cnt>0){
        printf("%d %d",cnt,first);
    }else{
        printf("-1");
    }
    return 0;
}