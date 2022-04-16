#include <stdio.h>

int main()
{
    int n, i, r[10], j;
    printf("input the decimal number:");
    scanf("%d", &n);
    printf("the binary of this number is:");
    for (i = 0; n > 0; i++)
    {
        r[i] = n % 2;
        n = n / 2;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", r[j]);
    }

    return 0;
}