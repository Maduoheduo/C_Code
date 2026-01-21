#include<stdio.h>
#define len 500005
int h[len];
int top=-1;
int stack[len];
int width[len];
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
void push(int e)
{
    if(top==len-1){
        printf("Full\n");
        return;
    }
    top++;
    stack[top]=e;
    return;
}
int pop()
{
    if(top==-1){
        printf("Empty\n");
        return -1;
    }
    int ret=stack[top];
    top--;
    return ret;
}
int main()
{
    int n;
    long long S=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    push(0);
    for(int i=0;i<n;i++){
        int bottom,left,right;
        while(top!=-1&&h[i]>=h[stack[top]]){//依次往下遍历，找到每个矩形
            bottom=pop();//还未加入i之前的次高值索引
            if(top==-1){
                break;
            }
            left=stack[top];//还未加入i之前的最高值索引
            right=i;
            S+=(long long)(min(h[right],h[left])-h[bottom])*(long long)(right-left-1);
        }
        push(i);
    }
    printf("%lld",S);
    return 0;
}