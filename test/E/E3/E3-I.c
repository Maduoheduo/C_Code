#include<stdio.h>
int main()
{
    int result[105];
    long long a,b,n;
    scanf("%lld%lld%lld",&a,&b,&n);
    int quotient=a/b;
    long long remainder=a%b;
    for(int i=0;i<=n;i++){
        remainder*=10;
        result[i]=remainder/b;
        remainder%=b;
    }
    if(result[n]>=5){
        result[n-1]++;
    }
    for(int i=n-1;i;i--){
        if(result[i]>9){
            result[i-1]++;
            result[i]%=10;
        }
    }
    if(result[0]>9){
        quotient++;
        result[0]%=10;
    }
    printf("%d.",quotient);
    for(int i=0;i<n;i++){
        printf("%d",result[i]);
    }
    return 0;
}