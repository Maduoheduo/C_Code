#include<stdio.h>
struct point{
    int x;
    int y;
};
struct point getstruct(void){
    struct point p;
    scanf("%i %i",&p.x,&p.y);
    printf("%i %i\n",p.x,p.y);
    return p;
}
int main(){
    struct point a={0,0};
    a=getstruct();
    printf("%i %i",a.x,a.y);
    return 0;
}