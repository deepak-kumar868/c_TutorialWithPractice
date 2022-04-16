#include <stdio.h>

int main()
{
    int y;
    printf("enter any year:");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("this year is leap year");
    }
    else
    {
        printf("this is not a leap year");
    }

    return 0;
}