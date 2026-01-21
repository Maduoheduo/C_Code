#include <stdio.h>
int main() {
    int n=0;
    scanf("%d", &n);
    int judge[n-1],number[n-1],inputjudge[n-1];
    int a=n;
    while (n--) {
        int x;
        scanf("%d", &x);
        inputjudge[a-1-n]=x/10000;
        if(inputjudge[a-1-n]==2537){
            judge[a-1-n]=x/1000%10;
            number[a-1-n]=x%1000; 
        }      
    }
    int i;
    for(i=0;i<a;i++){
        if(judge[i]==1){
            int n0=0;
            if(number[i]/10==0){
                n0=2;
            }else if(number[i]/100==0){
                n0=1;
            }
            printf("chuanyuan ");
            int n1;
            for(n1=0;n1<n0;n1++){
                printf("0");
            }
            printf("%d\n",number[i]);
        }else if(judge[i]==3){
            int n2=0;
            if(number[i]/10==0){
                n2=2;
            }else if(number[i]/100==0){
                n2=1;
            }
            printf("shie ");
            int n3;
            for(n3=0;n3<n2;n3++){
                printf("0");
            }
            printf("%d\n",number[i]);
        }
    }
    return 0;
}