#include <stdio.h>

int main()
{
    int i, n, fact, r, st = 0, n1;
    printf("input a number:");
    scanf("%d", &n);
    n1 = n;
    while (n != 0)
    {
        fact = 1;
        r = n % 10;
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        st += fact;
        n = n / 10;
    }
    if (st == n1)
    {
        printf("this is strong number");
    }
    else
    {
        printf("this is not a strong number");
    }
    return 0;
}