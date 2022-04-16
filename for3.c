#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("upto natural number");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", i);
        sum += i;
    }
    printf("\n");
    printf("the sum of natural number upto :%d", sum);

    return 0;
}