#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int save[n],date[n],cnt=0;
    for(int i=0;i<n;i++){
        date[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&save[i]);
        if(save[i]==1){
            cnt++;
            date[cnt-1]=i;
        }
    }
    int m;
    scanf("%d",&m);
    int k[m];
    
    
    //´æ 
    for(int p=0;p<m;p++){
        scanf("%d",&k[p]);
        if(k[p]>cnt){
            printf("No Way!\n");
        }else{
            printf("%d\n",date[cnt-k[p]]+1);
        }
    }
    return 0;
}