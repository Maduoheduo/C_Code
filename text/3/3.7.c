#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a;
    while(t--){
        scanf("%d",&a);
        int m=a>>7;
        int cnt=0;
        for(int i=0;i<7;i++){
              if(((m>>i)&1)==1){
                cnt++;
            }
        }
        if(cnt%2==0){
            int b=0,m;
            for(int i=0;i<14;i++){
                m=(a&1<<i)>>i;
                b|=m<<(13-i);
            }
            printf("%d\n",b);
        }else{
            printf("%d\n",a);
        }
    }
    
    
    return 0;
}