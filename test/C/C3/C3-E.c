#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int ing[30]={0};
        int n;
        scanf("%d",&n);

        for(int i=0;i<30;i++){
            if(n&(1<<i)){
                ing[i]=1;
            }
        }
        for(int j=29;j>=0;j--){
            if(ing[j]!=0){
                printf("%d ",1<<j);
            }
        } 
        printf("\n");
    }
    return 0;
}