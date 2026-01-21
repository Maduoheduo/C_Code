#include<stdio.h>
#include<math.h>
int main()
{
    int n,x0,y0,p,q,r;
    scanf("%d%d%d%d%d%d",&n,&x0,&y0,&p,&q,&r);
    int x,y;
    int i;
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        x0-=x;
        y0-=y;
    }
    if(pow(x0-p,2)+pow(y0-q,2)>pow(r,2)){
        printf("(%d,%d)",x0,y0);
    }else{
        printf("No way!");
    }
    return 0;
}