#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%6==0){
            printf("Tom wins\n");
        }else{
            printf("Jerry wins\n");
        }
    }
    return 0;
}