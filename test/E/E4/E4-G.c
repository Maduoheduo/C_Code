#include<stdio.h>
long long llabs(long long a)
{
    if(a<0){
        return -a;
    }else{
        return a;
    }
}
long long a[105];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int n,k;
        int sign=1,exit=0;
        long long result=1;
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(a[i]<0){
                sign=-sign;
            }else if(a[i]==0){
                sign=0;
            }

        }
        for(int i=0;i<n;i++){
            result*=llabs(a[i]);
            if(llabs(result)>1000000){
                if(sign==1){
                    printf(">\n");
                    exit=1;
                    break;
                }else if(sign==-1){
                    exit=1;
                    printf("<\n");
                    break;
                }
            }
        }
        result*=sign;
        if(exit==0){
            if(result>k){
                printf(">\n");
            }else if(result==k){
                printf("=\n");
            }else{
                printf("<\n");
            }
        }
    }
    return 0;
}