#include <stdio.h>

int main()
{
    int a1, a2;
    printf("enter the two angle of triangle:");
    scanf("%d%d", &a1, &a2);
    printf("third angle of triangle is:%d", 180 - (a1 + a2));
    return 0;
}