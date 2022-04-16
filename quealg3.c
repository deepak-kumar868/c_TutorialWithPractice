#include <stdio.h>

int main()
{
    int a, b, c;
    printf("input the two integer:");
    scanf("%d%d", &a, &b);
    c = a + b;
    if (a == 30 || c == 30 || b == 30)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}