#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int cnt=0;cnt<n;cnt++){
        int blank=0,index=0;
        for(int i=0;i<n;i++){
            if(b[cnt]==blank&&a[index]==0){
                a[index]=cnt+1;
                break;
            }
            index++;
            if(a[i]==0){
                blank++;
            }
            
        }
    }
    

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}