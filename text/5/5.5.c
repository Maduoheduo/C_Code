#include<stdio.h>
int isdigit(int a)
{
    if(a>='0'&&a<='9')
    {
        return 1;
    }else{
        return 0;
    }
}
int Read_digit()
{
    int sign=1;
    int read=0;
    char ch;
    ch=getchar();
    while(isdigit(ch)!=1)
    {
        if(ch=='-'){
            sign=-1;
            ch=getchar();
            break;
        }else{
            ch=getchar();
        }    
    }
    while(isdigit(ch)==1)
    {
        read+=(ch-'0');
        read*=10;
        ch=getchar();
    }
    return sign*read/10;
}
int gcd(int a,int b)
{
    if(a<b){
        int temp1=b;
        b=a;
        a=temp1;
    }
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b)
{
    int lcm=(a*b)/gcd(a,b);
    return lcm;
}
int main()
{
    int a,b,c,d;
    a=Read_digit();
    b=Read_digit();
    c=Read_digit();
    d=Read_digit();
    int down=lcm(b,d);
    int up=a*(lcm(b,d)/b)+c*(lcm(b,d)/d);
    if(up<0){
        printf("-");
        up=-up;
    }
    int temp=down;
    down/=gcd(down,up);
    up/=gcd(temp,up);
    printf("%d/%d",up,down);
    return 0;   
}