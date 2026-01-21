#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        sum^=m;
    }
    printf("%d",sum);
    return 0;
}