#include<stdio.h>
int a[105];
int main()
{
    int T;
    int n,k;
    scanf("%d",&T);
    while(T--){
        int exit=0,has0=0;
        int sign=1;
        scanf("%d%d",&n,&k);
        long long result=1;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]<0){
                sign=-sign;
                a[i]=-a[i];
            }else if(a[i]==0){
                sign=0;
            }
        }
        for(int i=0;i<n;i++){
            result*=a[i];
            if(result>1e6){
                break;
            }
        }
        result*=sign;
            if(result>k){
                printf(">\n");
            }else if(result==k){
                printf("=\n");
            }else{
                printf("<\n");
            }
        
    }
    return 0;   
}