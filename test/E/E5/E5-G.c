#include<stdio.h>
long long rec[10];//3-12
long long cnt[1]={0};
void putblank(int n)
{
    for(int i=0;i<n;i++){
        printf("|   ");
    }
    return;
}
long long optif(int n,int op,int blank,long long cnt[]) {
    cnt[0]++;
    putblank(blank);
    printf("calculate begin f(%d)\n",n);
    blank++;
    if(op==1&&rec[n-3]!=0){
        blank--;
        putblank(blank);
        printf("calculated before return f(%d) = %lld\n",n,rec[n-3]);
        return rec[n-3];
    }
    if(n==3){
        rec[0]=1;
        blank--;
        putblank(blank);
        printf("calculate end return f(3) = 1\n");
        return 1;
    }
    long long fn=0;
    for(int i=3;i<=n;i++) {
        if(i==3||i==n) {
            fn+=optif(n-1,op,blank,cnt);
        } else {
            fn+=optif(n-i+2,op,blank,cnt)*optif(i-1,op,blank,cnt);
        }
    }
    rec[n-3]=fn;
    blank--;
    putblank(blank);
    printf("calculate end return f(%d) = %lld\n",n,fn);
    return fn;
}
int main()
{   
    int op,n;
    scanf("%d%d",&op,&n);
    long long ans=optif(n,op,0,cnt);
    printf("answer f(%d) = %lld\n",n,ans);
    printf("total function invoked count = %lld\n",cnt[0]);
    return 0;
}