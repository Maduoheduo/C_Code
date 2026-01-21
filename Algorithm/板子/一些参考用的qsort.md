#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://accoding.buaa.edu.cn/problem/7813/index
//https://accoding.buaa.edu.cn/problem/7862/index
//https://accoding.buaa.edu.cn/problem/7868/index
//https://accoding.buaa.edu.cn/problem/7871/index
int values[] = {88, 56, 100, 2, 25};

int cmp(const void *p1, const void *p2) {  //升序排列
    int *a = (int *) p1, *b = (int *) p2; //这里排列的数据类型是int，如果要排列其他类型，需要把该行的int改成相应的类型
    if (*a < *b)return -1;
    else if (*a > *b) return 1;
    else return 0;
}

int cmp1(const void *p1, const void *p2) {  //降序排列
    int *a = (int *) p1, *b = (int *) p2;//这里排列的数据类型是int，如果要排列其他类型，需要把该行的int改成相应的类型
    if (*a > *b)return -1;
    else if (*a < *b) return 1;
    else return 0;
}
int cmp12(const void *p1, const void *p2) {  //long long 升序排列
    long long *a = (long long *) p1, *b = (long long *) p2;//这里排列的数据类型是long long，如果要排列其他类型，需要把该行的long long改成相应的类型
    if (*a < *b)return -1;
    else if (*a > *b) return 1;
    else return 0;
}
int cmp11(const void *p1, const void *p2) {  //long long 降序排列
    long long *a = (long long *) p1, *b = (long long *) p2;//这里排列的数据类型是long long，如果要排列其他类型，需要把该行的long long改成相应的类型
    if (*a > *b)return -1;
    else if (*a < *b) return 1;
    else return 0;
}

struct timetime {
    int hour;
    int minute;
    char str[40];
};



int cmpp(const void *p1, const void *p2) {
    struct timetime *a = (struct timetime *) p1, *b = (struct timetime *) p2; //这里排列的数据类型是time结构体，如果要排列其他类型，需要把该行的time改成相应的类型的结构体
    if (a->hour < b->hour)return 1;  //先按小时升序
    else if (a->hour > b->hour) return -1;
    else {//小时相同,按分钟升序
        if (a->minute < b->minute)return 1;
        else if (a->minute > b->minute) return -1;
        else//分钟相同,按字符串字典序升序
            return strcmp(a->str, b->str);   //字典序排序
    }
}
int cmp_str(const void *p1, const void *p2) {
    char *a = (char *) p1, *b = (char *) p2;
    return strcmp(a, b);   //字典序排序
}

int main() {
    int n;
    scanf("%d", &n);
    int t[1000];
    qsort(t, n, sizeof(int), cmp); //int排序从0~n-1，升序排列
    qsort(t+1, n, sizeof(int), cmp1); //int排序从1~n，降序排列
    long long tt[1000];
    qsort(tt, n, sizeof(long long), cmp11);//long long 排序
    struct timetime ttt[1000];
    qsort(ttt,n,sizeof(struct timetime),cmpp); //结构体排序
    char str[1000][100];
    qsort(str,n,sizeof (str[0]),cmp_str);//二维数组排序，按字典序升序排列str中每行的字符串
}