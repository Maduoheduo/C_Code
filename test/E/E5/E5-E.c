#include<stdio.h>
void move(int i,int from,int to)
{
    printf("Electromagnet move disk %d from %d to %d\n",i,from,to);
    return;
}
void hanoi(int n,int from,int via,int to)
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
    int n,from,to,via;
    scanf("%d%d%d%d",&n,&from,&to,&via);
    hanoi(n,from,via,to);
    return 0;
}