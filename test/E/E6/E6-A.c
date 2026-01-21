#include<stdio.h>
long long A[105][105];
long long B[105][105];
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%lld",&A[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            B[i][j]=A[j][i]+A[i][j];
            printf("%lld ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}