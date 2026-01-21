#include<stdio.h>
int a[2005][2005];
long long b[2005][2005];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int q,i1,i2,j1,j2;
    b[1][1]=a[1][1];
    for(int j=2;j<=m;j++){
        b[1][j]=b[1][j-1]+a[1][j];
    }
    for(int i=2;i<=n;i++){
        b[i][1]=b[i-1][1]+a[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d%d%d%d",&i1,&j1,&i2,&j2);
        long long ans;
        ans=b[i1-1][j1-1]-b[i1-1][j2]+b[i2][j2]-b[i2][j1-1];
        printf("%lld\n",ans);
    }
    return 0;
}