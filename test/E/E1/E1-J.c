#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d\n%d%d",&a,&b,&c,&d);
    int down=b*d;
    int up=a*d-c*b;
    if(up%down==0){
        printf("%d",up/down);
    }else{
        int x;
	    int m=down;//a=down
	    int n=up;
	while(down%up!=0){
		x=down%up;
		down=up;
		up=x;
	}
	m/=up;
	n/=up;
    if(m<0){
        m*=-1;
        n*=-1;
    }
    printf("%d/%d",n,m);
    }    
    return 0;
}