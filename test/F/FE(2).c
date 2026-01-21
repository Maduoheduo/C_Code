#include <stdio.h>
int main()
{

    return 0;
}
void afterdate(int year, int month, int day, int days, int result[3])
{
    int day_of_year = day;
    for (int i = 1; i < month; i++)
    {
        day_of_year += Dayspermonth(year, i);
    }
    day_of_year += days;
    while (day_of_year > 365 + isleapyear(year))
    {
        day_of_year -= 365 + isleapyear(year);
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