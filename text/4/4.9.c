#include<stdio.h>
int main()
{
    char ch;
    int m=0,n=0;
    int flag=1,wb=0;
    while((ch=getchar())!=EOF){
        if(ch=='w'){
            if(n!=0||wb==2){
                flag=0;
                break;
            }
            wb=1;
            m++;
        }else if(ch=='b'){
            wb=2;
            n++;
        }
    }
    if(m==0&&n==0){
        flag=0;
    }
    if(flag==1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}