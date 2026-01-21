#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *slice(const char a[],int start,int end){
    int slicelength=end-start;
    char *slice=(char*)malloc((slicelength+1)*sizeof(char));
    strncpy(slice,a+start-1,slicelength);//这里的a是指针，可以加减运算
    slice[slicelength]="\0";
    return slice;
}
int main()
{
    char a[]="noob";
    printf("%s",slice(a,1,4));
    return 0;
}