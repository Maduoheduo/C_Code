#include<stdio.h>
void write(long long n)
{
    if(n/9){
        write(n/9);
    }
    int a=n%9;
    if(a<5){
        printf("%c",a+'0');
    }else{
        printf("%c",a+1+'0');
    }    
}
int main()
{
    long long n;
    scanf("%lld",&n);
    write(n);
    return 0;
}