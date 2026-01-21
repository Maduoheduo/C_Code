#include<stdio.h>
int main()
{
    int n,m,x0,y0,x,y;
    char a;
    scanf("%d%d%d%d%d%d",&m,&n,&y0,&x0,&y,&x);
    for(int j=y-2;j<=y+2;j++){
        for(int i=x-2;i<=x+2;i++){
            if(i==x0&&j==y0){
                a='+';
            }else if(i==x0&&j!=y0){
                a='|';
            }else if(i!=x0&&j==y0){
                a='-';
            }else if(i-x0==j-y0){
                a='\\';
            }else if(i-x0==y0-j){
                a='/';
            }else if(i>x0&&j<y0){
                if(i-x0<y0-j){
                    a='A';
                }else{
                    a='B';
                }
            }else if(i>x0&&j>y0){
                if(i-x0>j-y0){
                    a='C';
                }else{
                    a='D';
                }
            }else if(i<x0&&j>y0){
                if(x0-i<j-y0){
                    a='E';
                }else{
                    a='F';
                }
            }else if(i<x0&&j<y0){
                if(x0-i>y0-j){
                    a='G';
                }else{
                    a='H';
                }
            }
            printf("%c",a);
            if(i==x+2){
                printf("\n");
            }
        }
    }
    return 0;
}