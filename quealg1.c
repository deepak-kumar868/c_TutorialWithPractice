#include <stdio.h>

int main()
{
    int a, b, c;
    printf("input the value of a and b:");
    scanf("%d%d", &a, &b);

    if (a == b)
    {
        c = 3 * a;
        printf("the return value is:%d", c);
    }
    else
    {
        c = a + b;
        printf("the return value is: %d", c);
    }

    return 0;
}