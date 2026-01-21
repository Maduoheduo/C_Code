#include<stdio.h>
#define ui unsigned int
ui f(ui x)
{
    return (x+2)*x+9;
}
ui g(ui x)
{
    return f(x)+f(2*f(x+3))+3*x;
}
ui h(ui x,ui y)
{
    return g(f(x)+y)+f(3*g(4*x+y))+g(f(f(x-y)));
}
int main()
{
    int T;
    ui x,y;
    scanf("%d",&T);
    while(T--){
        scanf("%u%u",&x,&y);
        printf("%u\n",h(x,y));
    }
    return 0;
}
//f(x)=(x+2)¡Áx+9 g(x)=f(x)+f(2¡Áf(x+3))+3x h(x,y)=g(f(x)+y)+f(3¡Ág(4x+y))+g(f(f(x?y))