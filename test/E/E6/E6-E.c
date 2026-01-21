#include<stdio.h>
#include<string.h>
char A[2005];
char B[2005];
char sliceA[2005][1000];
char sliceB[2005][1000];
int minlen(int n){
    if(n%2==1){
        return n;
    }
    return minlen(n>>1);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%s%s",A,B);
        int flag=0;
        int n=strlen(A);
        if(strlen(A)%2==1){
            if(strcmp(A,B)==0){
                flag=1;
            }
        }else{
            for(int i=0;i<n/minlen(n);i++){
                strcpy(sliceA[i],&A[i*minlen(n)]); 
                strcpy(sliceB[i],&B[i*minlen(n)]);   
            }
            int cnt=0;
            for(int i=0;i<n/minlen(n);i++){
                for(int j=0;j<n/minlen(n);j++){
                    if(strcmp(sliceA[i],sliceB[j])==0){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt==n/minlen(n)){
                flag=1;
            }    
        }
        if(flag==1){
            printf("Mocha Parfait!\n");
        }else{
            printf("qaq\n");
        }
    }
    return 0;
}