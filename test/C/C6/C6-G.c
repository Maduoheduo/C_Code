#include<stdio.h>
#define mod 100003
int a[1000005];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    a[0]=1;
    a[1]=1;
    if(n<=k){
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                a[i]+=a[j];
                a[i]%=mod;
            }
        }
    }else{
        for(int i=2;i<=n;i++){
            if(i<=k){
                for(int j=0;j<i;j++){
                    a[i]+=a[j];
                    a[i]%=mod;
                }
            }else{
                for(int j=i-1;j>=i-k;j--){
                    a[i]+=a[j];
                    a[i]%=mod;
                }
            }
        }
    }
    printf("%d",a[n]);
    return 0;
}