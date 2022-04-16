#include <stdio.h>

int main()
{
    int h;
    printf("enter the height of person:");
    scanf("%d", &h);
    if (h > 0 && h < 140)
    {
        printf("the person is drawf!");
    }
    else if (h >= 140 && h < 170)
    {
        printf("the person is perfect");
    }
    else if (h >= 170 && h < 180)
    {
        printf("the person is tall");
    }
    else
    {
        printf("this height is not posible");
    }

    return 0;
}