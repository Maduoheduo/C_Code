#include<stdio.h>
int main()
{
    char ch[100000];
    int i=0,cnt=0;
    while(scanf("%c",&ch[i])!=EOF){
        cnt++;
        if(ch[i]=='r'){
            if(ch[i-1]=='a'||ch[i-1]=='e'||ch[i-1]=='i'||ch[i-1]=='o'||ch[i-1]=='u'){
                ch[i]='0';
            }
        }
        i++;
    }
    for(int i=0;i<cnt;i++){
        if(ch[i]!='0'){
            printf("%c",ch[i]);
        }else{
            printf("");
        }
    }
    return 0;
}