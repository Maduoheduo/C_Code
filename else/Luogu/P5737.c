#include<stdio.h>
int year[3000];
int isleapyear(int n)
{
    int judge=0;
    if((n%4==0&&n%100!=0)||n%400==0){
        judge=1;
    }
    return judge;
}
int main()
{
    int x,y;
    int cnt=0;
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++){
        if(isleapyear(i)==1){
            cnt++;
            year[cnt]=i;
        }
    }
    printf("%d\n",cnt);
    for(int i=1;i<=cnt;i++){
        printf("%d ",year[i]);
    }
    return 0;
}