#include <stdio.h>

int main()
{
    int mon;
    printf("enter any number 1 to 12:");
    scanf("%d", &mon);
    switch (mon)
    {
    case 1:
        printf("month have 31 days");
        break;

    case 2:
        printf("in leap year month have 29 days");
        printf("normal month have 28 days");
        break;

    case 3:
        printf("month have 31 days");
        break;

    case 4:
        printf("month have 30 days");
        break;

    case 5:
        printf("month have 31 days");
        break;

    case 6:
        printf("month have 30 days");
        break;

    case 7:
        printf("month have 31 days");
        break;

    case 8:
        printf("month have 31 days");
        break;

    case 9:
        printf("month have 30 days");
        break;

    case 10:
        printf("month have 31 days");
        break;

    case 11:
        printf("month have 30days");
        break;

    case 12:
        printf("month have 31 days");
        break;

    default:
        break;
    }
    return 0;
}