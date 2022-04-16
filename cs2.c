#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("given number is even number");
    }
    else
    {
        printf("given number is odd number");
    }

    return 0;
}