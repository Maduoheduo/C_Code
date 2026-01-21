#include<stdio.h>
int judge(int swt,int input[4][4]){
    int i,cnt;
    for(i=0;i<4;i++){
        cnt=0;
        if(input[i][0]==swt){
            if(input[i][1]==1){
                cnt++;
            }else{
            if(input[i][1]==0){
                cnt++;
            }}
        }
        if(input[i][2]==swt){
            if(input[i][3]==1){
                cnt++;
            }else{
            if(input[i][3]==0){
                cnt++;
            }}
        }
        if(cnt!=1){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int input[4][4];
    int i;
    while(scanf("%d%d%d%d",&input[0][0],&input[0][1],&input[0][2],&input[0][3])!=EOF){
        for(i=1;i<4;i++){
            scanf("%d%d%d%d",&input[i][0],&input[i][1],&input[i][2],&input[i][3]);
        }
        
        int swt=0;
        for(int a=1;a<=4;a++){
            if(judge(a,input)==1){
                swt=a;
                break;
            }
        }
        printf("%d\n",swt);
    }
    
    return 0;
}