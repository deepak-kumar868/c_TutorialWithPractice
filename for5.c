#include <stdio.h>

int main()
{
    int n, i;
    printf("enter any integer:");
    scanf("%d", &n);

    printf("cube of number upto n:");
    for (i = 1; i <= n; i++)
    {
        printf("%d=%d\n", i, i * i * i);
    }

    return 0;
}