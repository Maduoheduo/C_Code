#include<stdio.h>
#define eps 1e-6
#include<math.h>
int h[10005];
void swap(int *i,int *j)
{
    int c=*i;
    *i=*j;
    *j=c;
}
void bubblesort(int a[],int n)
{
    int swapflag;
    for(int i=1;i<n;i++){
        swapflag=0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                swapflag=1;
            }
        }
        if(swapflag==0){
            break;
        }        
    }
}
int equal(double a,double b)
{
    if(fabs(a-b)<eps){
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    double p;
    scanf("%lf",&p);
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    bubblesort(h,n);
    double xp;
    for(int i=1;i<=n;i++){//思考为什么不能用i=0;i<n;i++
        if(equal(i,n*p)){
            xp=0.5*(h[i-1]+h[i]);
            break;
        }
        if(i>n*p){
            xp=h[i-1];
            break;
        }
    }
    printf("%.1lf",xp);
    return 0;
}