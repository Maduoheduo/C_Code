#include<stdio.h>
struct score{
    char name[9];
    int chinese;
    int math;
    int english;
    int sum;
};
void insertsort(int a[],int n)
{
    int insert_hold,insert_idx;
    for(int i=1;i<n;i++){
        insert_hold=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>insert_hold){
                a[j+1]=a[j];
                insert_idx=j;
            }else{
                break;
            }
        }
        a[insert_idx]=insert_hold;
    }
}
struct score id[1000];
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s",id[i].name);
        scanf("%d%d%d",&id[i].chinese,&id[i].math,&id[i].english);
        id[i].sum=id[i].chinese+id[i].math+id[i].english;
    }
    insertsort(id.score,N);
    printf("%s %d %d %d",id[N-1].name,id[N-1].chinese,id[N-1].math,id[N-1].english);
    return 0;
}