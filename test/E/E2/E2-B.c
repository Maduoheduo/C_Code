#include<stdio.h>
int main()
{
    char ch;
    int cnt=0;
    while((ch=getchar())!=EOF){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}