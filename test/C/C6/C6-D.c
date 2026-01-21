#include<stdio.h>
#include<string.h>
char a[20];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int num=10;
        scanf("%s",a);
        int i=strlen(a);
        if(a[i-1]>='0'&&a[i-1]<='9'){
            num=a[i-1]-'0';
        }else{
            num=a[i-1]-'a'+10;
        }
        unsigned long long sum=0;
        for(int j=0;j<i-1;j++){
            if(a[j]>='0'&&a[j]<='9'){
                sum+=(a[j]-'0');
            }else{
                sum+=(a[j]-'a'+10);
            }
            sum*=num;
        }
        printf("%llu\n",sum/num);
    }
    return 0;
}