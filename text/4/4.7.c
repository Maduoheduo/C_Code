#include<stdio.h>
double ctof(int c)
{
    return (double)c*1.8+32;
}
double ftoc(int f)
{
    return (double)5/9*(f-32);
}
int main()
{
    int op,l,r;
    scanf("%d%d%d",&op,&l,&r);
    if(op==1){
        for(int i=l;i<=r;i++){
            printf("%d %.2lf\n",i,ftoc(i));
        }
    }else if(op==0){
        for(int i=l;i<=r;i++){
            printf("%d %.2lf\n",i,ctof(i));
        }
    }
    return 0;
}