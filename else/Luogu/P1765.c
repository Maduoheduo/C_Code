#include<stdio.h>
#include<string.h>
char s[205];
int presscount(char c)
{
    if(c==' '||c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'){
        return 1;
    }else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x'){
        return 2;
    }else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y'){
        return 3;
    }else if(c=='s'||c=='z'){
        return 4;
    }
}
int main()
{
    gets(s);
    int cnt=0;
    for(int i=0;i<strlen(s);i++){
        cnt+=presscount(s[i]);
    }
    printf("%d",cnt);
    return 0;   
}