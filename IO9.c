#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two integer:");
    scanf("%d%d", &a, &b);
    printf("the addition of given number is:%d\n", a + b);
    printf("the subtraction of given number is:%d\n", a - b);
    printf("the multiplication of given number is:%d\n", a * b);
    printf("the division of given number is:%d\n", a / b);
    return 0;
}