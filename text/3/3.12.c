#include<stdio.h>
int score[10000]={0};
int main()
{
    int n=0;
    int sum=0,below_cnt=0,above_cnt=0,below_sum=0,above_sum=0;
    double average;
    while(scanf("%d",&score[n])!=EOF){
        sum+=score[n];
        n++;
    }
    average=(double)sum/n;
    if(sum%n==0){
        printf("%d %d\n",n,(int)average);
    }else{
        printf("%d %.2lf\n",n,average);
    }
    for(int i=0;i<n;i++){
        if(score[i]>=average){
            above_cnt++;
            above_sum+=score[i];
        }else{
            below_cnt++;
            below_sum+=score[i];
        }
    }
    if(above_sum%above_cnt==0){
        printf("%d %d\n",above_cnt,above_sum/above_cnt);
    }else{
        printf("%d %.2lf\n",above_cnt,(double)above_sum/above_cnt);
    }
    if(below_sum%below_cnt==0){
        printf("%d %d\n",below_cnt,below_sum/below_cnt);
    }else{
        printf("%d %.2lf\n",below_cnt,(double)below_sum/below_cnt);
    }
    return 0;
}