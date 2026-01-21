#include<stdio.h>
#include<string.h>
    char s[105];
int main()
{
    int q,op;
    scanf("%d",&q);
    scanf("%s",s);
    while(q--){
        scanf("%d",&op);
        switch(op){
            case 1:
                char s1[105];
                scanf("%s",s1);
                strcat(s,s1);
                printf("%s\n",s);
                break;
            case 2:
                char s2[105];
                int a,b;
                scanf("%d%d",&a,&b);
                s[a+b]='\0';
                strcpy(s2,&s[a]);
                strcpy(s,s2);
                printf("%s\n",s);
                break;
            case 3:
                int c;
                scanf("%d",&c);
                char s3[105];
                scanf("%s",s3);
                strcat(s3,&s[c]);
                s[c]='\0';
                strcat(s,s3);
                printf("%s\n",s);
                break;
            case 4:
                char s4[105];
                scanf("%s",s4);
                if(strstr(s,s4)==NULL){
                    printf("-1\n");
                }else{
                    printf("%lld\n",strstr(s,s4)-s);
                }
        }
    }
    return 0;
}