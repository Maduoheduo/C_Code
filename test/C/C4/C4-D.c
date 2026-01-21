#include<stdio.h>
int pow3(int a)
{
    return a*a*a;
}
int main()
{
    int a,b,c;
    int n;
    for(n=100;n<1000;n++){
        a=n/100;
        b=(n/10)%10;
        c=n%10;
        if(n%(pow3(a)+pow3(b)+pow3(c))==0){
            printf("%d\n",n);
        }
    }
    return 0;
}