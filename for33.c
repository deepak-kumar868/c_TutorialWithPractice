#include <stdio.h>

int main()
{
    int n, i, j, k, c;
    printf("input the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            if (i == 0 || k == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - k + 1) / k;
            }
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}