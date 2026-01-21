#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long i;
    for(int m=0;m<n;m++){
        scanf("%lld",&i);
        for(int j=63;j>=0;j--){
            printf("%lld",(i>>j)&1);
            if(j%4==0){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}