//以指针定义的字符串的地址很小，位于代码段，不允许直接修改
//char *s其实是const char *s
//想要修改字符串，就应该以数组形式定义，而非指针
//应用；指针定义用来表示不希望变动的字符串，数组定义用来表示可编辑的字符串

//scanf读入字符串时用"%3s"可限定最多读3位(不含/0)

//类似二维数组，char *a[x]表示x个指针组成的数组，每个指针都可指向一个字符串

//sizeof与strlen的区别：sizeof计算字符串长度时会计入/0，strlen不会
//                     sizeof会计算占用字节数，strlen计算字符数
//                     sizeof返回的数据类型是size_t(无符号整数类型)，在64位系统上占64字节，需用"%lld"与之匹配
//sizeof(char)=1,sizeof(int)=4 

//strncpy与strcpy的区别：strncpy可控制复制长度，格式为strncpy(dst,str,len)
//                      当len>strlen(str)时，所有多余位置都会自动填/0,反之(大字符串切片)则不会补/0，必须手动在末尾后一位补/0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //getchar
    //读取首位字符的asc码，若没有，返回EOF
    //侦测字符串的结束
    char word[]="114514";
    int n=0;
    while(getchar()!=EOF){
        n++;
    }
    printf("%d",n);

    //strlen
    char word1[]="Surprise";
    printf("%lld\n",strlen(word1));
    //strcmp
    char word2[]="myx";
    char word3[]="myy";
    if(strcmp(word2,word3)==0){
        printf("相等\n");
    }
    //字符相减
    printf("%lld\n","a"-"A");
    //strcpy
    char word4[]="asdfgh";
    char *dst=(char*)malloc(strlen(word4)+1);
        //先分配等量的内存给dst，再进行复制。注意+1
        //这里的dst只是一个指针，并不是字符串
    strcpy(dst,word4);
    printf("%s\n",dst);
    free(dst);
    //strchr
    //strrchr从右开始查找
    char word5[]="abccbaabc";
    char *p=strchr(word5,'a');
    p=strchr(p+1,"a");
    printf("%s\n",p);
    //strchr取前半段。原理是将找到的字符，即断点变为\0
    *p="\0";
    char *a=(char*)malloc(strlen(p)+1);
    strcpy(a,p);
    printf("%s\n",a);
    free(a);
    //strstr同理查找字符串
    return 0;
}