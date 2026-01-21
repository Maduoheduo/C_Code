#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int op,x,y;
    for(int i=0;i<q;i++){
        scanf("%d%d%d",&op,&x,&y);
        int save=a[x-1];
        long long b=0;
        switch(op){
            case 1:
                a[x-1]=a[y-1];
                break;
            case 2:
                a[x-1]=a[y-1];
                a[y-1]=save;
                break;
            case 3:
                a[x-1]+=y;
                break;
            case 4:
                a[x-1]=y;
                break;
            case 5:
                printf("%d\n",a[x-1]-a[y-1]);
                break;
            case 6:
                for(int i=x-1;i<y;i++){
                    b+=a[i];
                }
                printf("%lld\n",b);
                break;
        }
    }
    return 0;
}