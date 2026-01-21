#include<stdio.h>
int a[100005];
int main()
{
    int n;
    int max=0;
    int min=0;
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>=max){
            max=a[i];
        }
        if(a[i]<=min){
            min=a[i];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==max||a[i]==min){
            a[i]=0;
            cnt++;
        }
    }
    if(cnt==n){
        printf("#DIV/0!\n");
    }else{
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        printf("%.2lf",(double)sum/(n-cnt));
    }
    return 0;
}