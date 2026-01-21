#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        if(n>=2){
            printf("%d bottles of beer on the wall,\n%d bottles of beer.\nTake one down and pass it around,\nnow there's %d more bottles of beer on the wall!\n",n+1,n+1,n);
        }else if(n==1){
            printf("2 bottles of beer on the wall,\n2 bottles of beer.\nTake one down and pass it around,\nnow there's 1 more bottle of beer on the wall!\n");
        }else{
            printf("1 bottle of beer on the wall,\n1 bottle of beer.\nTake one down and pass it around,\nthere's no more bottles of beer on the wall!\n");
        }
    }
    return 0;
}