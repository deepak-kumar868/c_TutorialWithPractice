#include <stdio.h>

int main()
{
    int math, phy, che;
    float percentage;
    printf("input the marks of three subject:");
    scanf("%d%d%d", &math, &phy, &che);

    percentage = (math + phy + che) / 3;
    if (percentage > 60)
    {
        printf("ist division");
    }
    else if (percentage <= 60 && percentage > 50)
    {
        printf("2nd division");
    }
    else if (percentage >= 40 && percentage <= 50)
    {
        printf("3rd division");
    }
    else if (percentage < 40)
    {
        printf("fail");
    }

    return 0;
}