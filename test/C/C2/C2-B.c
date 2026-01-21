#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF){
        if(a>='a'&&a<='z'||a>='A'&&a<='Z'||a>='0'&&a<='9'){
            printf("Lingliang likes %c!\n",a);
        }else{
            printf("Ewww\n");
        }
    }
    return 0;
}