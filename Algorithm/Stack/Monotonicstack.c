#include<stdio.h>//以每日温度为例
#define len 105
int stack[len];
int tem[len];
int days[len];
int top=-1;
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
//从右向左
/*int main ()   
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tem[i]);
    }
    push(n-1);
    days[n-1]=0;
    for(int i=n-2;i>=0;i--){
        while(top!=-1&&tem[i]>=tem[stack[top]]){
            pop();
        }
        if(top!=-1){
            days[i]=stack[top]-i;
        }else{
            days[i]=0;
        }
        push(i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",days[i]);
    }
    return 0;
}*/

//从左向右
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tem[i]);
    }
    push(0);
    for(int i=0;i<n;i++){
        while(top!=-1&&tem[i]>tem[stack[top]]){//思考这里为什么不能用>=
            int j=pop();
            days[j]=i-j;//利用pop输出出栈的元素，不断更新答案。这里的j才是之前的日子，而i是新加的最大值对应日期（和右往左对比）
        }
        push(i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",days[i]);
    }
    return 0;
}