#include<stdio.h>
int swap(int a){
    int r;
    if(a>='a'&&a<='z'){
        int b=a-'a';
        r='Z'-b;
    }else if(a>='A'&&a<='Z'){
        int c=a-'A';
        r='z'-c;
    }else{
        r=a;
    }
    return r;
}
int main()
{
    int ch;
    while((ch=getchar())!=EOF&&ch!='\n'){
        putchar(swap(ch));
    }
    return 0;
}
