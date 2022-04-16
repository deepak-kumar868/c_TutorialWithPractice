#include <stdio.h>

int main()
{
    char chr = 'A';
    int n, i, j;
    printf("input the number of row:");
    scanf("%d", n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%c", chr);
            chr++;
        }
        for (j = 0; j <= i - 1; j++)
        {
            printf("%c", chr--);
            chr--;
        }
    }

    return 0;
}