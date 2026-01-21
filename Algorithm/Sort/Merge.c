#include<stdio.h>
int main()
{
    int na,nb,nc;
    scanf("%d%d",&na,&nb);
    nc=na+nb;
    int enda=0,endb=0;
    int a[na];
    int b[nb];
    int c[nc];
    int *i=a,*j=b,*k=c;
    for(int i=0;i<na;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<nb;i++){
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
        if(j==b+nb){
            endb=1;
        }
        if(i==a+na){
            enda=1;
        }
    }
    for(int i=0;i<nc;i++){
        printf("%d ",c[i]);
    }
    return 0;
}