#include<stdio.h>
#define len 50
int output[len]={-1};
void ArrayInit(int a[],int n,int k)
{
    for(int i=0;i<n;i++){
        a[i]=k;
    }
}
int numeration_switch(int n,int k,int a[])
{
    ArrayInit(a,len,-1);
    int i=0;
    if(n==0){
        i++;
        a[0]=0;
    }else{
        while(n>0){
            a[i++]=n%k;
            n/=k;
        }
    }
    return i-1;
}
int main()
{
    int a,k;
    scanf("%d%d",&a,&k);
    int i=numeration_switch(a,k,output);
    for(int j=i;j>=0;j--){
        printf("%d|",output[j]);
    }
    return 0;
}