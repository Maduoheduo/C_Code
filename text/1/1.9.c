#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int i;
    for(i=0;i<=4;i++){
        printf("%c",a);
    }
    printf("\n ");
    for(i=0;i<=2;i++){
        printf("%c",a);
    }
    printf("\n  ");
    printf("%c",a);
    return 0;
}