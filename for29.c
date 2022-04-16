#include <stdio.h>

int main()
{
    int n, i, r, sum = 0;
    printf("input a number:");
    scanf("%d", &n);
    i = n;
    while (n != 0)
    {
        r = n % 10;
        sum += r * r * r;
        n = n / 10;
    }
    if (sum == i)
    {
        printf("the given number is armstrong number:");
    }
    else
    {
        printf("the given number is not a armstrong number");
    }

    return 0;
}