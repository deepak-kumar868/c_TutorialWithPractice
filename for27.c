#include <stdio.h>

int main()
{
    int n, i, divisor, sum = 0;
    printf("input a number:");
    scanf("%d", &n);
    printf("the divisor is :");
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\t", i);
            sum += i;
        }
    }
    printf("\n");
    printf("the sum of divisor is:%d\n", sum);
    if (sum == n)
    {
        printf("the given number is perfect number");
    }
    else
        printf("the number is not a perfect number");

    return 0;
}