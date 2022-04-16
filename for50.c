#include <stdio.h>

int main()
{
    int n, i, j, r[10], ctr = 0;
    printf("enter the decimal number:");
    scanf("%d", &n);
    for (i = 0; n != 0; i++)
    {
        r[i] = n % 8;
        n = n / 8;
        ctr++;
    }
    printf("the octal of given decmal number is:");
    for (j = ctr - 1; j >= 0; j--)
    {
        printf("%d", r[j]);
    }

    return 0;
}