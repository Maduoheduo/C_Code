#include<stdio.h>
#include<string.h>
char result[][8]={"AC","CE","PE","WA","TLE","MLE","REG","OE"};
int main()
{
    char input[10];
    int cnt=0,cnt_ac=0;
    while(scanf("%s",input)!=EOF){
        for(int i=0;i<8;i++){
            if(strcmp(input,result[i])==0&&i!=1){
                cnt++;
                if(i==0){
                    cnt_ac++;
                }
                break;
            }
        }
    }
    printf("%.3lf",(double)cnt_ac/cnt);
    return 0;
}