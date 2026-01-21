#include<stdio.h>
#define len 100
int stack[len];
int isempty(int top)
{
    if(top==-1){
        return 1;
    }
    return 0;
}
void push(int arr[],int e,int top,int n)
{
    if(top<n-1){
        top++;
        arr[top]=e;
    }else{
        printf("Full\n");
    }
    return;
}
int pop(int arr[],int top)
{
    if(top>0){
        return(arr[top]);
        top--;
    }else{
        printf("Empty\n");
    }
    return 0;
}
int main()
{   
    int top=-1;

    return 0;
}