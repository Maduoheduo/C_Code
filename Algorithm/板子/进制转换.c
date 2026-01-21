// 其他可能的参考：C4H E4H

#include <stdio.h>
#include <string.h>
// 10转n进制
void dec2base(long long num, int n, char numnum[]) // 十进制转n进制（范围long long） //num为十进制数，n为进制，numnum为n进制数字的字符串
{

    int i = 0;
    while (num)
    {
        numnum[i] = num % n;
        if (numnum[i] >= 10)
            numnum[i] += 'A' - 10;
        else
            numnum[i] += '0';
        num /= n;
        i++;
    }
    numnum[i] = '\0';
}
// 16转10进制
long long hex2dec(char num[]) // 十六进制转十进制（范围long long） //num为十六进制数字的字符串
{
    long long numnum = 0;
    int len = strlen(num);
    long long mi = 1;
    for (int i = len - 1; i >= 0; --i)
    {
        if (num[i] >= '0' && num[i] <= '9')
            numnum += (num[i] - '0') * mi;
        else
            numnum += (num[i] - 'A' + 10) * mi;
        mi *= 16;
    }
    return numnum;
}