#include<stdio.h>
#include<string.h>
char *cat[4]={"char","int","long long","double"};
int size(char input[10])
{
    for(int i=0;i<4;i++){
        if(strcmp(input,cat[i])==0){
            if(i==0){
                return 1;
            }else if(i==1){
                return 4;
            }else{
                return 8;
            }
        }
    }
    return 0;
}
int main()
{
    int n,l;
    int sum=0;
    scanf("%d%d ",&n,&l);
    //不加这个空格的话gets会读n，l之后那个回车，吞掉一次循环
    char input[10];
    while(n--){
        gets(input);
        sum+=size(input);
    }
    sum*=l;
    printf("%d",sum);
    return 0;
}