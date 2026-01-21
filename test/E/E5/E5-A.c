#include<stdio.h>
int f1(int x) {
    return -~x++;
}
int f2(int x) {
    return ~-x++;
}
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("%d %d\n",f1(a),f2(a));
    }
    return 0;
}