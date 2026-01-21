#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int cnt=0;
        for(int j=0;j<32;j++){
            if(((i>>j)&1)==1){
                cnt++;
            }
        }
        printf("%d ",cnt);
    }
    return 0;
}
