#include <stdio.h>

int test(int x, int y)
{
    return x % 10 == y % 10;
}
int main()
{
    printf("%d\n", test(123, 456));
    printf("%d\n", test(12, 512));
    printf("%d\n", test(7, 87));
    printf("%d\n", test(12, 45));
}