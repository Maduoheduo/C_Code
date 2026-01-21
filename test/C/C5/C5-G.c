#include<stdio.h>
#define ui unsigned int
ui A[1000000000];
ui Ak(ui n,ui k)
{
    ui ret;
    ui numA=0;
    if(n==0){
        ret=0;
    }else if(n==1){
        ret=1;
    }else{
        if(n>LA(numA)){
            ret=Ak(n-LA(numA),numA+1);
        }
    }
}
ui T(ui n)
{
    ui length=0,l;
    for(ui i=0;i<n;i++){//a5=5  6  7 8  8 9 10 11  9 10 11 12 12 13 14 15
        length+=LA(i);
        if(length>=n){
            l=i;
            break;
        }
    }
    n-=length/2;
    return Ai(n,l);
}
ui LA(ui i)
{
    if(i==0||i==1){
        return 1;
    }else{
        return 2*LA(i-1);
    }
}
ui SA(ui i)
{
    return i;
}
int main()
{
    ui n;
    scanf("%u",&n);
    n++;

    return 0;
}