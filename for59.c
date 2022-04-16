#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, sum = 0, n1;
    printf("input the number:");
    scanf("%d", &n);
    n1 = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if (sum == n1)
    {
        printf("given number is armstrong number:");
    }
    else
    {
        printf("not armstrong number");
    }

    return 0;
}