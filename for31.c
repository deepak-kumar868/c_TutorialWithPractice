#include <stdio.h>

int main()
{
    int i, j, k, n;
    printf("input the number of row:\n");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        for (j = n / 2; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = n / 2; k > i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}