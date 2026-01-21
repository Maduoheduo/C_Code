#include <stdio.h>
void swap_string(char **pstr1, char **pstr2)
{
    char *tmp;
    tmp = *pstr1;
    *pstr1 = *pstr2;
    *pstr2 = tmp;
}
int main()
{
    char *str1 = "hello";
    char *str2 = "world";
    swap_string(&str1, &str2); // 传进指针的地址
    printf("%s\n%s\n", str1, str2);
    return 0;
}