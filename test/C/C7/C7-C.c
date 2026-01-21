#include<stdio.h>
#include<string.h>
char s[1000005];
char dst[5000005],smid[5000005],sbehind[5000005];
char* Strcat(char *dst,const char *src)
{
    char *p=dst;
    while(*src){
        *p++=*src++;
    }
    *p='\0';
    return p;
} 
int main()
{
    int n,p,q;
    char *p1=dst;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s);
        p1=Strcat(p1,s);
    }
    scanf("%d%d",&p,&q);
    char *c=dst+p-1,*d=dst+q-1;
    char s1=*c,s2=*d;
    strcpy(sbehind,d+1);
    *d='\0';
    strcpy(smid,c+1);
    *c='\0';
    Strcat(c,&s2);
    Strcat(c+1,smid);
    Strcat(c+1+strlen(smid),&s1);
    Strcat(c+1+strlen(smid)+1,sbehind);
    printf("%s",dst);
    return 0;
}