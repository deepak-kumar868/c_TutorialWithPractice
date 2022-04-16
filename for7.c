#include <stdio.h>

int main()
{
    int n, i, j;
    printf("input a number:");
    scanf("%d", &n);
    printf("table of given number is\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d*%d=%d\t", i, j, j * i);
        }
        printf("\n");
    }

    return 0;
}