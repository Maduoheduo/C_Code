#include<stdio.h>
void prn(char a,char b,int k,int sign)
{
    if(sign==1){
        for(int i=0;i<k;i++){
            printf("%c",a);
        }
    }else if(sign==-1){
        for(int i=0;i<k;i++){
            printf("%c",b);
        }
    }
}
int main()
{
    int n,k;
    int sign=1;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){//jÐÐ
            for(int p=0;p<n;p++){
                prn('1',' ',k,sign);
                sign=-sign;
            }
            if(n%2==1){
                sign=-sign;
            }
            printf("\n");
        }
        sign=-sign;
    }
    return 0;
}