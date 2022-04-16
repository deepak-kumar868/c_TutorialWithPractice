#include <stdio.h>

int main()
{
    int x, y, z;
    printf("enter three integer:");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("first number is greater number");
    }
    else if (y > x && y > z)
    {
        printf("second number is greater number");
    }
    else if (z > x && z > y)
    {
        printf("thired number is largest number");
    }

    return 0;
}