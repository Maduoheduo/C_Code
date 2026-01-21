#include<stdio.h>
long long a[65];
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0||n==1){
        printf("1");
        return 0;
    }else if(n==2){
        printf("2");
        return 0;
    }else{
        a[0]=1;
        a[1]=1;
        a[2]=2;
        for(int i=3;i<=n;i++){
            for(int j=0;j<i;j++){
                a[i]+=a[j];
            }
        }
        printf("%lld",a[n]);
        return 0;
    } 
}