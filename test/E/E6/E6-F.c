#include<stdio.h>
int s[200005];
int t[200005];
int time[1000005];
int main()
{
    int n,m,T;
    scanf("%d%d%d",&n,&m,&T);
    for(int i=0;i<n;i++){
        scanf("%d%d",&s[i],&t[i]);
    }
    int cnt=0;
    for(int j=0;j<T;j++){
        for(int i=0;i<n;i++){
            if(j==s[i]){
                cnt++;
            }
            if(j==t[i]){
                cnt--;
            }
        }
        if(cnt<=m){
            time[j]=1;
        }
    }
    int start,len=0,index;
    for(int i=0;i<T;i++){
        if(i==0&&time[i]==1){
            start=i;
        }else if(time[i]==1&&time[i-1]==0){
            start=i;
        }
        if((time[i]==1&&time[i+1]==0)||i==T-1){
            if((i-start)>len){
                len=i-start;
                index=start;
            }
        }
    }
    printf("%d",index);
    return 0;   
}