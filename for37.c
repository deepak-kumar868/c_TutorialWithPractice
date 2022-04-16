#include <stdio.h>

int main()
{
    int n, i;
    printf("input a number:");
    scanf("%d", &n);
    printf("the number in reverse order is:");
    while (n != 0)
    {
        printf("%d", n % 10);
        n = n / 10;
    }

    return 0;
}