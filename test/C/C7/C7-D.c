#include<stdio.h>
#include<string.h>
#define ull unsigned long long
char s[105];
char s1[105];
int main()
{
    int T;
    scanf("%d\n",&T);
    int base=0;
    ull room=0;
    int gb,mb,kb,b;
    for(int i=0;i<T;i++){
        gets(s);
        char *p=s;
        base=0;
        /*
        另一种判断开头字符串的方法，可用于首字母有重复的情况
        int startswith(const char *t){
            for(int i=0;t[i];i++)
            if(s[i]!=t[i]) return 0;
            return 1;
        } 
        int get_size(){
            if(startswith("char ")) return 1;
            if(startswith("short ")) return 2;
            if(startswith("int ")) return 4;
            if(startswith("long long ")) return 8;
            return 0;
        }
        */
        switch(s[0]){
            case 'c':
                base=1;
                break;
            case 's':
                base=2;
                break;
            case 'i':
                base=4;
                break;
            case 'l':
                base=8;
                break;
        }
        while(*p!='['){
            p++;
        }
        p++;
        strcpy(s1,p);
        s1[strlen(s1)-2]='\0';
        room=0;
        for(int i=0;i<strlen(s1);i++){
            room*=10;
            room+=(s1[i]-'0');
        }
        room*=base;
        gb=room/1073741824;//1<<30;
        room%=1073741824;
        mb=room/(1073741824/1024);
        room%=(1073741824/1024);
        kb=room/(1073741824/(1048576));
        b=room%(1073741824/(1048576));
        if(gb){
            printf("%dGB ",gb);
        }
        if(mb){
            printf("%dMB ",mb);
        }
        if(kb){
            printf("%dKB ",kb);
        }
        if(b){
            printf("%dB",b);
        }
        printf("\n");
    }
    return 0;
}