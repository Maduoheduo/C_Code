#include<stdio.h>
int main()
{
    int t=0;
    scanf("%d", &t);
    int save[t];
    int a=t;
    while (t--) {
        int n;
        scanf("%d", &n);
        save[a-1-t]=n;
    }
    int i;
    for(i=0;i<a;i++){
        if(save[i]%2==0){
            printf("Bob\n");
        }else{
            printf("Alice\n");
        }
        }
    return 0;
    }