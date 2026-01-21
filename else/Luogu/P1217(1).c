#include <stdio.h>
int palindromes[1000005];
int is_prime(int n)
{
    int prime = 1;
    if (n == 2)
    {
        return 1;
    }
    if (n == 1 || n == 0)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
void generate_palindromes(int a, int b)
{
    // 对于一位数和两位数的情况
    if (a <= 5 && b >= 5)
        printf("5\n");
    if (a <= 7 && b >= 7)
        printf("7\n");
    if (a <= 11 && b >= 11)
        printf("11\n");

    // 生成3位、5位、7位、9位的回文数
    // 注意：偶数位的回文数都能被11整除，除了11本身都不是素数

    // 3位数回文：ABA形式
    for (int i = 1; i <= 9; i += 2)
    { // 个位为奇数（除了2）
        for (int j = 0; j <= 9; j++)
        {
            int num = 100 * i + 10 * j + i;
            if (num < a)
                continue;
            if (num > b)
                return;
            if (is_prime(num))
                printf("%d\n", num);
        }
    }

    // 5位数回文：ABCBA形式
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                int num = 10000 * i + 1000 * j + 100 * k + 10 * j + i;
                if (num < a)
                    continue;
                if (num > b)
                    return;
                if (is_prime(num))
                    printf("%d\n", num);
            }
        }
    }

    // 7位数回文：ABCDCBA形式
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int l = 0; l <= 9; l++)
                {
                    int num = 1000000 * i + 100000 * j + 10000 * k +
                              1000 * l + 100 * k + 10 * j + i;
                    if (num < a)
                        continue;
                    if (num > b)
                        return;
                    if (is_prime(num))
                        printf("%d\n", num);
                }
            }
        }
    }

    // 9位数回文：ABCDEDCBA形式（1亿以内的回文数最大8位，这里只处理特殊情况）
    // 实际上，b最大为1亿，所以9位数不需要处理
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    generate_palindromes(a, b);
    return 0;
}