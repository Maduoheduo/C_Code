#include<stdio.h>
int main()
{
    int m,n,nc;
    scanf("%d%d",&m,&n);
    nc=m+n;
    int enda=0,endb=0;
    int a[m+1];
    int b[n+1];
    int c[nc+2];
    int *i=a,*j=b,*k=c;
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int p=0;p<nc;p++){
        if((*i<*j&&enda!=1)||endb==1){
            *k=*i;
            k++;
            i++;
        }else if((*i>=*j&&endb!=1)||enda==1){
            *k=*j;
            k++;
            j++;
        }
        if(j==b+n){
            endb=1;
        }
        if(i==a+m){
            enda=1;
        }
    }
    for(int i=0;i<nc;i++){
        printf("%d ",c[i]);
    }
    return 0;
}