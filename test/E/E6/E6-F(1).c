#include<stdio.h>
int flag[1000005];
int d[1000005];
int judge(int arr[],int i,int j)
{
    for(int k=i;k<=j;k++){
        if(arr[k]==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m,T;
    scanf("%d%d%d",&n,&m,&T);
    int s,t;
    for(int i=0;i<n;i++){
        scanf("%d%d",&s,&t);
        d[s]++;
        d[t]--;
    }
    int M=0;
    for(int i=0;i<=T;i++){
        M+=d[i];
        if(M<=m){
            flag[i]=1;
        }else{
            flag[i]=0;
        }
    }
    int i=0,len=0,start=0;;
    while(i<T){
        if(flag[i]==1){
            int j;
            for(j=i;j<T;j++){
                if(flag[j]==0){
                    break;
                }
            }
            if(j-i>len){
                len=j-i;
                start=i;
            }
        }
        i++;
    }
    printf("%d",start);
    return 0;
}