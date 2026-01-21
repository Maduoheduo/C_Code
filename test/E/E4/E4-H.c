#include<stdio.h>
#include<string.h>
#define mod 998244353
char input[1000005];
int digit[1000005];
int main()
{
    scanf("%s",input);
    int i=strlen(input);
    for(int j=0;j<i;j++){
        digit[j]=input[j]-'0';
    }
    /*先对各位做如下处理：
        <5：不变
        =5：这位变成4，低位全变为9
        >5：这位-1
      再将其当成九进制数，转换为十进制
    */
    long long result=0,base=1;
    for(int j=0;j<i;j++){
        if(digit[j]==5){
            digit[j]--;
            for(int k=j+1;k<i;k++){
                digit[k]=9;
            }
        }else if(digit[j]>5){
            digit[j]--;
        }
    }
    for(int j=i-1;j>=0;j--){
        result+=digit[j]*(base%mod);
        base=base%mod*9;
    }
    result=(result+1)%mod;
    printf("%lld",result);
    return 0;
}