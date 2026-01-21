#include<stdio.h>
int main()
{

    int input;
    long long sum=0;
    while(scanf("%d",&input)!=EOF){
        sum+=input;
    }
    printf("%lld",sum);
    return 0;
}