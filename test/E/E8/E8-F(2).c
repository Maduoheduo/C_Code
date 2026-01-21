#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char s1[6], s2[6], s3[11];          // 存储原始字符串
char temp1[6], temp2[6], temp3[11]; // 用于转换的临时字符串

int next_permutation(int j[], int n)
{
    int l, r;
    for (l = n - 2; l >= 0 && j[l] >= j[l + 1]; l--)
        ;
    if (l < 0)
        return 0;
    for (r = n - 1; j[r] <= j[l]; r--)
        ;
    int tmp = j[l];
    j[l] = j[r];
    j[r] = tmp;
    for (l++, r = n - 1; l < r; l++, r--)
    {
        tmp = j[l];
        j[l] = j[r];
        j[r] = tmp;
    }
    return 1;
}

long long convert_string(char str[])
{
    long long result = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        result = result * 10 + num[str[i] - '0'];
    }
    return result;
}

int has_leading_zero(char str[])
{
    return num[str[0] - '0'] == 0;
}

int main()
{
    // 初始化所有变量
    char input[50];
    long long a = 0, b = 0, c = 0;

    printf("请输入算式（格式：12345 * 67890 = 838102050）：");
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        printf("读取输入失败\n");
        return 1;
    }

    // 解析输入
    if (sscanf(input, "%5s * %5s = %10s", s1, s2, s3) != 3)
    {
        printf("输入格式错误！请使用：XXXXX * YYYYY = ZZZZZZZZZZ 格式\n");
        return 1;
    }

    // 验证字符串长度
    if (strlen(s1) != 5 || strlen(s2) != 5 || strlen(s3) < 1)
    {
        printf("数字长度不正确！\n");
        return 1;
    }

    printf("解析到的数字：%s * %s = %s\n", s1, s2, s3);

    // 备份原始字符串
    strcpy(temp1, s1);
    strcpy(temp2, s2);
    strcpy(temp3, s3);

    int attempts = 0;
    const int max_attempts = 3628800; // 10!
    int found = 0;

    do
    {
        // 检查前导零
        if (has_leading_zero(temp1) || has_leading_zero(temp2) || has_leading_zero(temp3))
        {
            attempts++;
            continue;
        }

        // 转换数字
        a = convert_string(temp1);
        b = convert_string(temp2);
        c = convert_string(temp3);

        // 调试输出
        if (attempts % 100000 == 0)
        {
            printf("尝试 %d: %lld * %lld = %lld\n", attempts, a, b, c);
        }

        if (a * b == c)
        {
            found = 1;
            break;
        }

        attempts++;

    } while (next_permutation(num, 10) && attempts < max_attempts);

    if (found)
    {
        printf("找到解：%lld * %lld = %lld\n", a, b, a * b);
    }
    else
    {
        printf("未找到解（尝试了 %d 次）\n", attempts);
    }

    return 0;
}