#include<stdio.h>
#include<string.h>
char A[2005];
char B[2005];
int cutline(char a[],char b[],int len)
{
    if(strncmp(a,b,len)==0){
        return 1;
    }
    if(len%2==1){//为什么不能有len!=1?
        return 0;
    }
    int mid=len/2;
    if(cutline(a,b,mid)&&cutline(a+mid*sizeof(char),b+mid*sizeof(char),mid)){
        return 1;
    }
    if(cutline(a,b+mid*sizeof(char),mid)&&cutline(a+mid*sizeof(char),b,mid)){
        return 1;
    }
    return 0;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%s%s",A,B);
        if(cutline(A,B,strlen(A))==1){
            printf("Mocha Parfait!\n");
        }else{
            printf("qaq\n");
        }
    }
    return 0;
}