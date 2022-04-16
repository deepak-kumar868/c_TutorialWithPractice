#include <stdio.h>

int main()
{
    int i, j, n, k = 1, l;
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
            printf(" %d  ", k++);
        }
        printf("\n");
    }

    return 0;
}