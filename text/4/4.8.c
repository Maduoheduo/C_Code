#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int x,h,sumh=0;
    double gpa,sumgpa=0.0;
    while(N--){
        scanf("%d%d",&x,&h);
        if(x>=60){
            gpa=(double)4.0-3.0*(100-x)*(100-x)/1600;
        }else{
            gpa=0;
        }
        sumh+=h;
        sumgpa+=(double)gpa*h;
    }
    printf("%.2lf",(double)sumgpa/sumh);
    return 0;
}