#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char x[1000005];
    while(t--){
        scanf("%s",x);
        int root=0;
        for(int i=0;i<strlen(x);i++){
            root+=x[i]-'0';
        }
        while(root/10>0){
            int temp;
            temp=root;
            root=0;
            do{
                root+=temp%10;
                temp/=10;
            }while(temp>0);
        }
        printf("%d\n",root);
    }
        
    return 0;
}