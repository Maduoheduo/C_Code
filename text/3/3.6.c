#include<stdio.h>
int get(int a,int n)//提取a的第n位
{
    return (a&1<<n)>>n;
}
int main()
{
    int a,m,n;
    while(scanf("%d%d%d",&a,&m,&n)!=EOF){//先把特定位变零
        int p=get(a,m),q=get(a,n);
        a&=~(1<<m);
        a&=~(1<<n);
        a|=p<<n;
        a|=q<<m;
        printf("%d\n",a);
    }
    return 0;
}