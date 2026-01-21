#include<stdio.h>
#include<string.h>
#define LEN 505
char s[LEN];
char s1[LEN][LEN];
int save[LEN];
void swap(int *i,int *j)
{
    int c=*i;
    *i=*j;
    *j=c;
}
void bubblesort(char s1[][LEN],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(s1[j],s1[j+1])>0){
                char temp[LEN];
                strcpy(temp,s1[j]);
                strcpy(s1[j],s1[j+1]);
                strcpy(s1[j+1],temp);
                swap(&save[j],&save[j+1]);
            }
        }
    }
}
int main()
{
    scanf("%s",s);
    for(int i=0;i<(int)strlen(s);i++){
        strcpy(s1[i],&s[i]);
        save[i]=i+1;
    }
    bubblesort(s1,strlen(s));
    for(int i=0;i<(int)strlen(s);i++){
        printf("%d ",save[i]);
    }
    return 0;   
}