#include <stdio.h>
int test(int x)
{
    return x % 3 == 0 || x % 7 == 0;
}

void main()
{
    printf("%d\n", test(3));
    printf("%d\n", test(14));
    printf("%d\n", test(12));
    printf("%d\n", test(37));
}