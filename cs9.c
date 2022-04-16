#include <stdio.h>

int main()
{
    int x, y;
    printf("enter coordinate of point:");
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("given point lies in 1st quadrant");
    }

    if (x < 0 && y > 0)
    {
        printf("given point lies in 2nd quadrant");
    }

    if (x < 0 && y < 0)
    {
        printf("given point lies in 3rd quadrant");
    }

    if (x > 0 && y < 0)
    {
        printf("given point lies in 4th quadrant");
    }

    return 0;
}