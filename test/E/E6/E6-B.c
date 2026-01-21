#include<stdio.h>
#include<string.h>
char fruit[1005][105];
int main()
{
    int i=0;
    char input[105];
    while(scanf("%s",input)!=EOF){
        int flag=1;
        for(int j=0;j<i;j++){
            if(strcmp(input,fruit[j])==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            strcpy(fruit[i],input);
            printf("Delicious!\n");
            i++;
        }else{
            printf("Not Applicable\n");
        }
    }
    return 0;
}