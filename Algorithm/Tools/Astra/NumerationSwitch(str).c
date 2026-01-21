#include<stdio.h>
int output[50]={0};
int numeration_switch(int n,int k,int a[])
{
    int i=0;
    if(n==0){
        i++;
        a[0]='0';
    }else{
        while(n>0){
            if(n%k>9){
                a[i++]='a'+n%k-10;
            }else{
                a[i++]='0'+n%k;
            }
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
        printf("%c",output[j]);
    }
    return 0;
}