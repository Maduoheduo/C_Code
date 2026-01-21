#include<stdio.h>
#define ui unsigned int
ui locate(ui n)
{
    ui k=0,temp=n;
    if(n==0){
        return 0;
    }
    while(temp>0){
        temp/=2;
        k++;
    }
    return k+locate(n-(1<<(k-1)));
}
int main()
{   
    ui n;
    scanf("%u",&n);
    printf("%u",locate(n));
    return 0;
}