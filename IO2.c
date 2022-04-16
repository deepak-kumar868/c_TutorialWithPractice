#include <stdio.h>

int main()
{
    float r;
    printf("input the radius of sphere:");
    scanf("%f", &r);
    printf("volume of sphere is:%f", (float)((4.0 / 3.0) * 3.14 * r * r * r));
    return 0;
}