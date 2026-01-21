#include<stdio.h>
int main()
{
    long long h,p,q;
    int n;
    int exit=0;
    while(scanf("%lld%lld%lld%d",&h,&p,&q,&n)!=EOF){
        long long save_h=h;
        long long a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        while(exit==0){
            for(int i=0;i<n;i++){
                h+=a[i];
                if(h<=p){
                    exit=1;
                    break;
                }else if(h>=q){
                    exit=2;
                    break;
                }
            }
            if(h==save_h&&exit==0){
                exit=3;
            }else if(h<save_h&&exit==0){
                exit=1;
            }else if(h>save_h&&exit==0){
                exit=2;
            }
        }

        switch(exit){
            case 3:
                printf("No\n");
                break;
            case 1:
                printf("down\n");
                break;
            case 2:
                printf("up\n");
                break;
        }
        exit=0;
    }
    return 0;
}