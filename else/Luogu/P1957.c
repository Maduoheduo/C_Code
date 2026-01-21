#include<stdio.h>
#include<string.h>
void calculate(int a,int b,int op)
{
    int len;
    switch(op){
        case 1:
            len=printf("%d+%d=%d\n",a,b,a+b);
            break;
        case 2:
            len=printf("%d-%d=%d\n",a,b,a-b);
            break;
        case 3:
            len=printf("%d*%d=%d\n",a,b,a*b);
            break;
    }
    printf("%d\n",len-1);
    return;
}
int main()
{
    int i,a,b,op;
    char input1[5];
    scanf("%d",&i);
    while(i--){
        scanf("%s",input1);
        if(input1[0]=='a'){
            op=1;
            scanf("%d%d",&a,&b);
            calculate(a,b,op);
        }else if(input1[0]=='b'){
            op=2;
            scanf("%d%d",&a,&b);
            calculate(a,b,op);
        }else if(input1[0]=='c'){
            op=3;
            scanf("%d%d",&a,&b);
            calculate(a,b,op);
        }else{
            a=0;
            int i=0;
            while(input1[i]!='\0'){
                a+=(input1[i]-'0');
                a*=10;
                i++;
            }
            a/=10;
            scanf("%d",&b);
            calculate(a,b,op);
        }
    }
    return 0;   
}