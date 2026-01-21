#include<stdio.h>
int main()
{
    int n,sum,rem,count;
    sum=0;
    rem=0;
    scanf("%d",&n);
    while(n+rem>=5){
        n+=rem;
        rem=n%5;
        count=n/5;
        n/=5;
        sum+=count;
    }
    printf("%d",sum);
    return 0;
}