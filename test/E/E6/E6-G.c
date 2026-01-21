#include<stdio.h>
char snowflake[6565][6565];
int intpow3(int n)
{
    if(n==0){
        return 1;
    }
    return 3*intpow3(n-1);
}
void condense(int i,int j,int t)
{
    if(t==0){
        snowflake[i][j]='x';
        return;
    }
    if(t==1){
        snowflake[i][j]='x';
        snowflake[i+1][j+1]='\\';
        snowflake[i-1][j-1]='\\';
        snowflake[i+1][j-1]='/';
        snowflake[i-1][j+1]='/';
        return;
    }
    condense(i,j,t-1);
    condense(i-intpow3(t-1),j-intpow3(t-1),t-1);
    condense(i+intpow3(t-1),j+intpow3(t-1),t-1);
    condense(i-intpow3(t-1),j+intpow3(t-1),t-1);
    condense(i+intpow3(t-1),j-intpow3(t-1),t-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    int len=intpow3(t);
    for(int i=0;i<=len;i++){
        for(int j=0;j<=len;j++){
            snowflake[i][j]=' ';
        }
    }
    condense((len+1)/2-1,(len+1)/2-1,t);
    for(int i=0;i<len;i++){
        puts(snowflake[i]);
    }
    return 0;
}