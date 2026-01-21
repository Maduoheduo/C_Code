#include<stdio.h>

int main()
{
    int id[105],op[105];
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&id[i],&op[i]);
        id[i]%=10;
    }
    for(int i=0;i<n;i++){
        switch(op[i]){
            case 0:
                sum+=id[i];
                break;
            case 1:
                break;
            case 2:
                if(sum<=2){
                    sum=0;
                }else{
                    sum-=2;
                }
                break;
        }
    }
    if(sum>=37){
        printf("%d",sum);
    }else{
        printf("See you next year !");
    }
    return 0;
}