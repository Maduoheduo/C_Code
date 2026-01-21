#include<stdio.h>
/*输入10进制数n，把n转换为九进制，但是让5替代9的位置
  即：每输入一个大于等于5的数（九进制中的5678），就+1*/
  //这里是用十进制表示九进制，也可以用字符串
int main()
{
    long long n,ans=0;
    while(scanf("%lld",&n)!=EOF){
        ans=0;
        long long base=1;
        while(n>0){
            int c=n%9;
            if(c<5){
                ans+=base*c;
            }else{
                ans+=base*(c+1);
            }
            n/=9;
            base*=10;
        }
        printf("%lld\n",ans);
    }
    
    return 0;
}