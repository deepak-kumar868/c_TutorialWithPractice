#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("enter two integer:");
    scanf("%d%d", &a, &b);
    printf("input 1 for addition\n");
    printf("input 1 for substraction\n");
    printf("input 3 for multiplication\n");
    printf("input 4 for division\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("the addition of two number is :%d", a + b);
        break;

    case 2:
        printf("the addition of two number is :%d", a - b);
        break;

    case 3:
        printf("the addition of two number is :%d", a * b);
        break;

    case 4:
        printf("the addition of two number is :%d", a / b);
        break;

    default:
        break;
    }
    return 0;
}