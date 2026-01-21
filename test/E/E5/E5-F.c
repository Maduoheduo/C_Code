#include<stdio.h>
void divide(int n)
{
    if(n==1){
        printf("1");
        return;
    }
    if(n%2==1){
        printf("(");
        divide((n-1)/2);
        printf("+1+");
        divide((n-1)/2);
        printf(")");
    }
    if(n%2==0){
        printf("(");
        divide(n/2);
        printf("+");
        divide(n/2);
        printf(")");
    }
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        divide(n);
        printf("\n");
    }
    return 0;   
}