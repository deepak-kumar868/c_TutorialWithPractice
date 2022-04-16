#include <stdio.h>

int main()
{
    int year;
    printf("input the year between 1700 to 2700:");
    scanf("%d", &year);
    if (year >= 1700 && year <= 1917 && year % 4 == 0)
    {
        printf("Date of day of programmer is:12:09:%d", year);
    }
    else if (year >= 1700 && year <= 1917 && year % 4 != 0)
    {
        printf("Date of day of programmer is:13:09:%d", year);
    }
    else if (year >= 1919 && year <= 2700 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        printf("Date of day of programmer is:12:09:%d", year);
    }
    else if (year >= 1919 && year <= 2700 && (year % 400 != 0 && (year % 4 != 0 || year % 100 == 0)))
    {
        printf("Date of day of programmer is:13:09:%d", year);
    }
    else if (year == 1918)
    {
        printf("Date of day of programmer is:27:09:%d", year);
    }

    return 0;
}