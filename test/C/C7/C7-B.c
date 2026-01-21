#include<stdio.h>
#include<string.h>
int core[45][45],input[45][45],output[45][45];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&core[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&input[i][j]);
        }
    }
    for(int i=0;i<m-n+1;i++){
        for(int j=0;j<m-n+1;j++){
            for(int p=0;p<n;p++){
                for(int q=0;q<n;q++){
                    output[i][j]+=core[p][q]*input[i+p][j+q];
                }
            }
        }
    }
    for(int i=0;i<m-n+1;i++){
        for(int j=0;j<m-n+1;j++){
            printf("%d ",output[i][j]);
        }
        printf("\n");
    }
    return 0;
}