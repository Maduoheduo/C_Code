#include<stdio.h>
int man[105];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i=0,cnt=n;
    while(cnt>0){
        for(int j=0;j<m;j++){
            i=i%n+1;
            while(man[i]==1){
                i=i%n+1;
            }
        }
        man[i]=1;
        cnt--;
        printf("%d ",i);
    }
    return 0;
}