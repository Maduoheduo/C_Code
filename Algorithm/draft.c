#include <stdio.h>
int isleapyear(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}
int Dayspermonth(int y, int m)
{
    if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m == 2)
    {
        return 29;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        return 31;
    }
    else if (m == 2)
    {
        return 28;
    }
    else
    {
        return 30;
    }
}
void afterdate(int year, int month, int day, int days, int result[3])
{
    // 将输入日期转换为当年的第几天
    int day_of_year = day;
    for (int i = 1; i < month; i++)
    {
        day_of_year += Dayspermonth(year, i);
    }

    // 加上要增加的天数
    day_of_year += days;

    // 处理年份进位
    while (day_of_year > 365 + isleapyear(year))
    {
        day_of_year -= 365 + isleapyear(year);
        year++;
    }

    // 计算月份和日期
    month = 1;
    while (day_of_year > Dayspermonth(year, month))
    {
        day_of_year -= Dayspermonth(year, month);
        month++;

        // 月份进位处理
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }

    // 保存结果到数组
    result[0] = year;
    result[1] = month;
    result[2] = day_of_year;
}

// 测试函数
int main()
{
    int year = 2025, month = 12, day = 5;
    int days = 8848; // 100天后
    int future_date[3];

    afterdate(year, month, day, days, future_date);

    printf("当前日期: %d-%02d-%02d\n", year, month, day);
    printf("%d天后的日期: %d-%02d-%02d\n", days, future_date[0], future_date[1], future_date[2]);

    return 0;
}