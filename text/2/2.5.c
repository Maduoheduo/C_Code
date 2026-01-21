#include<stdio.h>
int moneyperday(int a){
    int i;
    if(a>=120){
        return 15;
    }
    for(i=0;i<=a;i++){
        if(a<=(i*i+i)/2){
            return i;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int money=0;
    int i=0;
    while(i<=n){
        money+=moneyperday(i);
        i++;
    }
    printf("%d",money);
    return 0;
}