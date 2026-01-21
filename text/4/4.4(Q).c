#include<stdio.h>
int sum[3],cnt[3];
int max[3]={-1,-1,-1},min[3]={101,101,101};//取0和100易爆范围。
int judge(char class){
    if(class=='A'){
        return 0;
    }else if(class=='B'){
        return 1;
    }else if(class=='C'){
        return 2;
    }
    return 8;
}
int main()
{
    int n;
    scanf("%d",&n);
    n*=2;//？
    char class;
    int score;
    while(n--){//调试发现每输入一行敲回车后，这个while语句块就跑两遍，是%c读了换行的回车吗？如果这样，后面还应该跟一空格一整数才满足scanf格式啊。求佬解答
        scanf("%c %d",&class,&score);
        cnt[judge(class)]++;
        sum[judge(class)]+=score;
        if(score>=max[judge(class)]){
            max[judge(class)]=score;
        }
        if(score<=min[judge(class)]){
            min[judge(class)]=score;
        }
    }
    double best=0.0;
    int bestclass;
    for(int i=0;i<3;i++){
        if((double)sum[i]/cnt[i]>best){
            bestclass=i;
            best=(double)sum[i]/cnt[i];
        }
    }
    switch(bestclass){
        case 0:
            printf("A\n");
            break;
        case 1:
            printf("B\n");
            break;
        case 2:
            printf("C\n");
            break;
    }
    for(int i=0;i<3;i++){
        printf("%d %d\n",max[i],min[i]);
    }
    return 0;
}