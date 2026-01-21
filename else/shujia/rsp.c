//函数形参一定要在前面声明变量形式，警钟长鸣
//用malloc需要引用头文件stdlib
//字符串结尾是\0,不是/0
//''表示单个字符,""表示整个字符串。字符串不可判相等,但字符可以
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int judge(char a,char b){
    int p=0;
    if((a)=='R'){
        if(b=='S'){
            p=1;
        }else if(b=='P'){
            p=-1;
        }
    }else if(a=='S'){
        if(b=='P'){
            p=1;
        }else if(b=='R'){
            p=-1;
        }
    }else if(a=='P'){
        if(b=='R'){
            p=1;
        }else if(b=='S'){
            p=-1;
        }
    }
    return p;
};//判断单次胜负
char* cutfour(const char c[],int i){//i是切片的起始点
    char *output=(char*)malloc(5*sizeof(char));
    strncpy(output,c+i,4);
    output[4]="\0";
    return output;
}//截取4字
int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    char word1[n+1];
    char word2[m+1];
    scanf("%s",word1);
    scanf("%s",word2);
    int cut=0;
    int maxscore=0;
    while(cut+3<=n){
        char a;
        char *aftercut=&a;
        aftercut=cutfour(word1,cut);
        int score=0;
        int i;
        for(i=0;i<=3;i++)
        {
            if(judge(word2[i],aftercut[i])==1){
                score++;
            }            
        }
        if(score>maxscore){
            maxscore=score;
        }
    }
    printf("%d",maxscore);
    return 0;
}