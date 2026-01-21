#include<stdio.h>
int isleap(int y,int m)
{
    if(((y%4==0&&y%100!=0)||y%400==0)&&m==2){
        return 1;
    }else{
        return 0;
    }
}
int dpm[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int T;
    scanf("%d",&T);
    int y,m;
    while(T--){
        scanf("%d%d",&y,&m);
        if(isleap(y,m)){
            printf("29\n");
        }else{
            printf("%d\n",dpm[m]);
        }
    }
    return 0;
}