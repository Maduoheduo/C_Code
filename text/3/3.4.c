#include<stdio.h>
int main()
{
    int t,k,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&k,&n);
        k=k>>n;
        if((k&1)==1){
            printf("Yes!\n");
        }else{
            printf("NO!\n");
        }
    }
    return 0;
}