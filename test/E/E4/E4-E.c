#include<stdio.h>
int h[105];
int main()
{
    int N,xb,yb;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&h[i]);
    }
    scanf("%d%d",&xb,&yb);
    for(int y=20;y>=0;y--){
        for(int x=0;x<N;x++){
            if(y==yb&&(x==xb+1||x==xb-1)){
                printf("-");
            }else if(y==yb&&(x==xb)){
                printf("o");
            }else if(y<h[x]){
                printf("*");
            }else if(y==h[x]){
                printf("_");
            }else if(y>h[x]){
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}