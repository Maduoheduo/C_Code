#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int l,r;
    while(t--){
        scanf("%d%d",&l,&r);
        while(l<r){
            l|=(l+1);
        }
        printf("%d\n",l);
    }
    return 0;
}