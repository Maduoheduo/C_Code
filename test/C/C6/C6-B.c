#include<stdio.h>
int a[1005];
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--){
        int hash[3]={0,0,0};
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            hash[a[i]%3]++;
        }
        int flag=1;
        for(int i=0;i<3;i++){
            if(hash[i]>(n+1)/2){
                flag=0;
            }
        } 
        if(flag==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}