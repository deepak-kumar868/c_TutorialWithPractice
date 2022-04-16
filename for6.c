#include <stdio.h>

int main()
{
    int n, i;
    printf("input a number:");
    scanf("%d", &n);
    printf("table of given number is\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }

    return 0;
}