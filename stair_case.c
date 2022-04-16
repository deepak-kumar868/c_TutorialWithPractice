#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("enter the height of staircase:");
    scanf("%d", &n);
    char c = '#';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}