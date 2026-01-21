#include<stdio.h>
int home[1000005];
int main()
{
    int n,a,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        home[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>=max){
            max=a;
        }
        home[a-1]++;
    }
    for(int i=0;i<max;i++){
        if(home[i]!=0){
            printf("%d : %d\n",i+1,home[i]);
        }
    }
    return 0;
}