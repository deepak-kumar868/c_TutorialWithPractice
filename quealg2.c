#include <stdio.h>

int main()
{
    int n;
    printf("input the number:");
    scanf("%d", &n);

    if (n <= 51)
    {
        printf("the return value is :%d", 51 - n);
    }
    else
    {
        printf("the return value is :%d", 3 * n);
    }

    return 0;
}