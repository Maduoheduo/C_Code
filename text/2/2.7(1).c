//不应推出甜瓜，而应枚举甜瓜直至符合题意:(
#include<stdio.h>
void judge1(int c[8],int d[8],int j[8]){//处理相同(反)项
    int a;
    for(a=0;a<8;a++){
        int b;
        for(b=0;b<8;b++){
            if(c[a]==c[b]&&j[a]!=2){
                if(d[a]==d[b]){
                    j[b]=j[a];
                }else{
                    j[b]=1-j[a];
                }
            }
        }
    }
}
void judge2(int j[8]){//每人说的话只有一半对
    int a;
    for(a=0;a<8;a++){
        if(j[a]==1){
            if(a%2==0&&a<=6){
                j[a+1]=0;
            }else if(a%2==1&&a>=1){
                j[a-1]=0;
            }
        }else if(j[a]==0){
            if(a%2==0&&a<=6){
                j[a+1]=1;
            }else if(a%2==1&&a>=1){
                j[a-1]=1;
            }
        }
    }
}
int main()
{
    int exit=0;
    //输入
    int a[8]={0,0,0,0,0,0,0,0},b[8]={0,0,0,0,0,0,0,0},gua[4]={0,0,0,0},swt,swtcnt=0;
    int judge[8]={2,2,2,2,2,2,2,2};
    int i;
    int m,n;
    for(i=0;i<8;i++){
        scanf("%d",&m);
        a[i]=m;
        scanf("%d",&n);
        b[i]=n;
    }
    //假设a0对
    int prov=0;
    while(exit!=1){
        //循环直至所有项均判完
        judge[prov]=1;
        int finish=0;
        while(finish!=1){
            judge1(a,b,judge);
            judge2(judge);
            int x;
            finish=1;
            for(x=0;x<8;x++){
                if(judge[x]==2){
                    finish=0;
                    break;
                }
            }
        }
        //检查
        int a1;
        for(a1=0;a1<8;a1++){
            if(judge[a1]==1&&b[a1]==1){
                gua[a[a1]-1]=1;
            }
        }
        int a2;
        for(a2=0;a2<4;a2++){
            if(gua[a2]==1){
                swtcnt++;
                swt=a2;
            }
        }
        if(swtcnt==1){
            exit=1;
        }
        prov++;
    }
    printf("%d\n",swt+1);  
    return 0;
}