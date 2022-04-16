#include <stdio.h>

int main()
{
    float sp1;
    printf("enter the speed in kilometer per hours:");
    scanf("%f", &sp1);
    printf("speed in miles per hours is:%f", (float)(0.62 * sp1));
    return 0;
}