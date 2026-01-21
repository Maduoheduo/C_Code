#include<stdio.h>
int main()
{
    int n,x,rank=1;
    scanf("%d%d",&n,&x);
    int score[n];
    for(int i=0;i<n;i++){
        scanf("%d",&score[n-i-1]);
    }
    for(int i=0;i<n;i++){
        if(score[i]>x){
            rank++;
        }
    }
    printf("%d",rank);
    return 0;
}