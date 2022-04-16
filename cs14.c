#include <stdio.h>

int main()
{
    int a, b, c;
    printf("input the length of side of triangle:");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("equilateral triangle");
    }
    else if (a == b || b == c || c == a)
    {
        printf("isoleses triangle");
    }
    else
    {
        printf("scalane triangle");
    }

    return 0;
}