#include<stdio.h>
#include<string.h>
char S[2005];
char S1[2005];
int s[2005];
char word[15][55];
int main()
{
    int n;
    gets(S);
    strcpy(S1,S);
    for(int i=0;i<strlen(S);i++){
        if(S1[i]>='A'&&S1[i]<='Z'){
            S1[i]+=32;
        }
    }
    scanf("%d\n",&n);
    char *p=S1;
    int q;
    for(int i=0;i<n;i++){
        scanf("%s",word[i]);
        p=S1;
        while((p=strstr(p,word[i]))&&p!=NULL){
            q=(int)(p-S1);
            p++;
            for(int j=0;j<strlen(word[i]);j++){
                s[q+j]=1;
            }
            if(p>S1+strlen(S1)){
                break;
            }  
        }
    }
    for(int i=0;i<strlen(S);i++){
        if(s[i]==1){
            S[i]='*';
        }
    }
    printf("%s",S);
    return 0;
}