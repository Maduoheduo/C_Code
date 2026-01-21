#include<stdio.h>
void move(int i,char from,char to)
{
    printf("%d:%c-->%c\n",i,from,to);
    return;
}
void hanoi(int n,char from,char via,char to)
{
    if(n==1){
        move(n,from,to);
        return;
    }
    hanoi(n-1,from,to,via);
    move(n,from,to);
    hanoi(n-1,via,from,to);
}
int main()
{
    char from='A',via='B',to='C';
    int n;
    scanf("%d",&n);
    hanoi(n,from,via,to);
    return 0;
}