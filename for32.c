#include <stdio.h>

int main()
{
    int n, i, ctr = 0;
    printf("input the number:");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            ctr++;
        }
    }
    if (ctr == 0)
    {
        printf("this is prime number");
    }
    else
    {
        printf("this is not a prime number");
    }

    return 0;
}