#include<stdio.h>
int main()
{
    int a,t,v;
    while(scanf("%d%d",&a,&t)!=EOF){
        v=a*t;
        if(v<7900){
            printf("<1\n");
        }else if(v>=7900&&v<11200){
            printf("1\n");
        }else if(v>=11200&&v<16700){
            printf("2\n");
        }else{
            printf("3\n");
        }
    }
    return 0;
}