#include<stdio.h>
void insertsort(int a[],int n)
{
    int insert_hold,insert_idx;
    for(int i=1;i<n;i++){
        insert_hold=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>insert_hold){
                a[j+1]=a[j];//如果新元素插入在中间，比他大的元素就要往后顺推一位，所以要提前保存第i位插入的元素，不然就被覆盖掉了
                insert_idx=j;//思考为什么不能用j+1
            }else{
                break;
            }
        }
        a[insert_idx]=insert_hold;
    }
}
int a[10];
int main()
{
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    insertsort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}