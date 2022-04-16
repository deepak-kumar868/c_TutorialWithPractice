#include <stdio.h>

int main()
{
    int n, reverse = 0, r, original;
    printf("input a number:");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        r = n % 10;
        reverse = reverse * 10 + r;
        n = n / 10;
    }
    if (reverse == original)
    {
        printf("the given number is palindrome number");
    }
    else
    {
        printf("the given number is not a palindrome number");
    }

    return 0;
}