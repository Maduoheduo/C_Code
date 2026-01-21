#include<stdio.h>
void del(int a[],int n)
{
    int max=0,min=10;
    int i,j,mi,mj;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            mi=i;
        }
    }
    for(j=0;j<n;j++){
        if(a[j]<min){
            min=a[j];
            mj=j;
        }
    }
    a[mi]=0;
    a[mj]=0;
}
int main()
{
    int a[20];
    double score[100];
    int n,m;
    scanf("%d%d",&n,&m);
    int hold=n;
    while(n--)
    {
        int sum=0;
        for(int i=0;i<m;i++){
            scanf("%d",&a[i]);
        }
        del(a,m);
        for(int i=0;i<m;i++){
            sum+=a[i];
        }
        score[n]=(double)sum/(double)(m-2);
    }
    double maxscore=0.0;
    for(int i=0;i<hold;i++){
        if(score[i]>maxscore){
            maxscore=score[i];
        }
    }
    printf("%.2lf",maxscore);
    return 0;
}