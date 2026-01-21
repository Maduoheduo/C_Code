#include<stdio.h>
int S(long long a){
    a-=97;
    return a;
}
int RS(long long a){
    a+=97;
    return a;
}
int main()
{
    long long k;
    scanf("%lld\n",&k);
    int m=1;
    long long a,b;
    while((a=getchar())!='\n'&&a!=EOF){//为什么没有下面两行，密文会多一位？？
        
        b=(S(a)+k*(m-13))%26;
        if(b<0){
            b+=26;
        }
        m=b;
        putchar(RS(b));
    }
    return 0;
}