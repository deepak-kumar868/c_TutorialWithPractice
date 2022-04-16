#include <stdio.h>

int main()
{
    int i, j, n, l;
    printf("input the number of row:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (l = n; l >= i; l--)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf(" %d  ", i);
        }
        printf("\n");
    }

    return 0;
}