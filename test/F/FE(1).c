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
    if (isleapyear(y) && m == 2)
    {
        return 29;
    }
    else if (isleapyear(y) && m == 13)
    {
        return 30;
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
    int day_of_year = day;
    for (int i = 1; i < month; i++)
    {
        day_of_year += Dayspermonth(year, i);
    }
    day_of_year += days;
    while (day_of_year > 365 + isleapyear(year) * 31)
    {
        if (isleapyear(year))
        {
            day_of_year -= 396;
        }
        else
        {
            day_of_year -= 365 + isleapyear(year);
        }
        year++;
    }
    month = 1;
    while (day_of_year > Dayspermonth(year, month))
    {
        day_of_year -= Dayspermonth(year, month);
        month++;
        if (((!isleapyear(year)) && month > 12) || ((isleapyear(year) && month > 13)))
        {
            month = 1;
            year++;
        }
    }
    result[0] = year;
    result[1] = month;
    result[2] = day_of_year;
}
int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        int y0 = input / 10000, m0 = input / 100 % 100, d0 = input % 100;
        int date[3];
        afterdate(y0, m0, d0, 99, date);
        printf("%d%02d%02d\n", date[0], date[1], date[2]);
    }
    return 0;
}