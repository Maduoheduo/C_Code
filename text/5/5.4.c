#include<stdio.h>
#include<string.h>
#include<ctype.h>
int j_1(char a[])
{
    return a[0]=='E'? 1:0;
}
int j2(char a[])
{
    return (isupper(a[1])&&a[1]!='I'&&a[1]!='O')? 1:0;
}
int j3_9(char a[])
{
    for(int i=2;i<=8;i++){
        if(a[i]<'0'||a[i]>'9'){
            return 0;
        }
    }
    return 1;
}
int jl(char a[])
{
    return strlen(a)==9? 1:0;
}
int main()
{
    char a[20];
    scanf("%s",a);
    if(j_1(a)&&j2(a)&&j3_9(a)&&jl(a)){
        printf("This passport is valid");
    }else{
        printf("This passport is invalid");
    }
    return 0;
}