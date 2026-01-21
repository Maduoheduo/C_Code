#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[1005];

// 判断是否需要展开，返回：0-不展开，1-展开，2-删除减号
int judge(char *p)
{
    // 边界检查
    if (p == s || *(p + 1) == '\0')
        return 0;

    char left = *(p - 1);
    char right = *(p + 1);

    // 检查是否同为小写字母或同为数字
    if ((islower(left) && islower(right)) || (isdigit(left) && isdigit(right)))
    {
        if (right > left)
        {
            if (right - left == 1)
                return 2; // 删除减号
            return 1;     // 需要展开
        }
    }
    return 0; // 保留减号
}

void expand(char left, char right, int p1, int p2, int p3)
{
    if (p3 == 1)
    { // 正序
        for (char c = left + 1; c < right; c++)
        {
            char output_char;
            if (p1 == 3)
            {
                output_char = '*';
            }
            else if (isdigit(left))
            {
                output_char = c;
            }
            else
            { // 字母
                output_char = (p1 == 1) ? c : toupper(c);
            }

            for (int j = 0; j < p2; j++)
            {
                putchar(output_char);
            }
        }
    }
    else
    { // 逆序
        for (char c = right - 1; c > left; c--)
        {
            char output_char;
            if (p1 == 3)
            {
                output_char = '*';
            }
            else if (isdigit(left))
            {
                output_char = c;
            }
            else
            { // 字母
                output_char = (p1 == 1) ? c : toupper(c);
            }

            for (int j = 0; j < p2; j++)
            {
                putchar(output_char);
            }
        }
    }
}

int main()
{
    int p1, p2, p3;
    scanf("%d%d%d", &p1, &p2, &p3);
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '-' && i > 0 && i < len - 1)
        {
            int result = judge(&s[i]);

            if (result == 2)
            { // 删除减号
                // 直接跳过，不输出减号
                continue;
            }
            else if (result == 1)
            { // 展开
                expand(s[i - 1], s[i + 1], p1, p2, p3);
                continue;
            }
            // result == 0 时保留减号，继续正常输出
        }
        putchar(s[i]);
    }

    return 0;
}