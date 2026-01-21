#include<stdio.h>//a1和d的最大公约数就是整个数列的最大公约数
int gcd(int a,int b)
{
    while(b!=0){
        int hold=b;
        b=a%b;
        a=hold;
    }
    return a;
}
int main()
{
    int T;
    scanf("%d",&T);
    int n,a1,d;
    while(T--){
        scanf("%d%d%d",&n,&a1,&d);
        printf("%d\n",gcd(a1,d));
    }
    return 0;
}